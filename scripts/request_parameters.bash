#!/bin/bash
#$1 is filename
METHOD_NAME=`bash ./namehelper.bash $1`

PARAMETERS=`perl -pe 's/^(.*?)\n/ \"&$1=\" + $1 + /' $1`
PARAMETERS=`echo $PARAMETERS | perl -pe 's/^\"\&/\"/' | perl -pe 's/\s*\+\s*$//'`
# echo $PARAMETERS
# PARAMETERS=`echo $PARAMETERS | perl -pe 's/(.*),\s*/$1/; $_=$1'`
[ -z "$PARAMETERS" ] && REQUEST_CMD="request(\"$METHOD_NAME\");" || REQUEST_CMD="request(\"$METHOD_NAME\", $PARAMETERS);"
echo -e " {\n\t$REQUEST_CMD\n}"