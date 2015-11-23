#include "mainDataClass.h"
dataVectorVector::dataVectorVector(optionsClass * optionsInput) {
    options = optionsInput;
    dataVectorVectorEntity.clear();
};
dataVectorVector::~dataVectorVector() {
    for (auto i : dataVectorVectorEntity)
        delete i;
    for (auto i : nerWorkersVector)
        delete i;

    dataVectorVectorEntity.clear();
    nerWorkersVector.clear();
};
void dataVectorVector::addToQueue(requestEntity * adding) {
    /*define where to add*/
    // printf("addToQueue\n");
    // int * i = new int(1);
    if (!options->multitoken) {
        if (dataVectorVectorEntity.empty()) {
            createNewQueue(adding);
        } else {
            dataVectorVectorEntity.back()->addToQueue(adding);
        }
    } else {
        dataVectorType * tempDataVectorType = findTokenVector(adding);
        if (tempDataVectorType == NULL)
        {
            createNewQueue(adding);
        } else {
            tempDataVectorType->addToQueue(adding);
        };
    };

};
dataVectorType * dataVectorVector::findTokenVector(requestEntity * subject) {
    for (auto i : dataVectorVectorEntity)
        if (i->dataVector.front()->token == subject->token)
            return i;
    return NULL;
}

void dataVectorVector::createNewQueue(requestEntity * adding) {
    pthread_t newWorkerThread;
    int * i = new int (1);
    dataVectorVectorEntity.push_back(new dataVectorType(options, adding, i));

    nerWorkersVector.push_back(new networking(i, dataVectorVectorEntity.back(), options, &newWorkerThread));
    dataVectorVectorEntity.back()->workerThread = newWorkerThread;
}