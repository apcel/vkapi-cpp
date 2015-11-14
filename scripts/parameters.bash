#!/bin/bash
#$1 is filename
PARAMETERS=`perl -pe 's/^(.*?)\n/std::string $1, /' $1`
# echo $PARAMETERS
PARAMETERS=`echo $PARAMETERS | perl -pe 's/(.*),\s*/$1/; $_=$1'`
echo -n \($PARAMETERS\)
