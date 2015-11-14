#!/bin/bash
METHOD_NAME=`bash ./namehelper.bash $1`
METHOD_CLASSNAME=`bash ./nameUpper.bash $1`
PARAMETERS=`bash ./parameters.bash $1`
echo void "$2"$METHOD_CLASSNAME $PARAMETERS"$3"';'