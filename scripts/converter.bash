#!/bin/bash


#nameUpper.bash: /tmp/t4/messages.get -> messagesGet
#namehelper.bash: /tmp/t4/messages.get -> messages.get



PARAMS_LIST_DIR="/tmp/t4/"
find $PARAMS_LIST_DIR -maxdepth 1 -type f |
echo /tmp/t4/messages.get |    xargs -P1 -I{} bash -c "
        bash ./main.bash {}
    "