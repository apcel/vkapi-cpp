#!/bin/bash
#$1 == method
METHOD=`echo $1 | sed -e 's/\/tmp\/t4\///g';`
# echo $METHOD
UPPER=`echo $METHOD | perl -pe 's/.*?\.(.).*/$1/'`
# echo $UPPER
UPPER=`echo $UPPER | awk '{print toupper($0)}'`
# echo $UPPER
echo $METHOD | perl -pe "s/\../$UPPER/"