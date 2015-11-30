#pragma once
#include <iostream>
#include <pthread.h> // for threading

#include "options.h"
#include "networking.h"
#include "types.h"
#include "networking.h"

class dataVectorVector
{
    optionsClass * options;

    std::vector<networking *> nerWorkersVector;
public:
    std::vector<dataVectorType *> dataVectorVectorEntity;
    explicit dataVectorVector(optionsClass * optionsInput);
    ~dataVectorVector();

    void addToQueue(requestEntity * adding);// Worker = new networking(&requested, this, options);
private:
    void createNewQueue(requestEntity * adding);
    dataVectorType * findTokenVector(requestEntity * subject);
};