#!/bin/bash
#$1 is filename
METHOD_NAME=`bash ./namehelper.bash $1`

PARAMETERS=`perl -pe 's/^(.*?)\n/ \"&$1=\" + $1 + /' $1`
PARAMETERS=`echo $PARAMETERS | perl -pe 's/^\"\&/\"/' | perl -pe 's/\s*\+\s*$//'`
cat $1 |
    perl -pe 's/^(.*?)\n/ if \(\($1 != \"\\0\"\)&&\($1 != \"\"\)\) {requestParameters += \(\"&$1=\" +  $1\);};/g'|
    perl -pe 's/^(.*?&&.*?)&/$1/' | perl -pe 's/^(.*?)\+=/$1=/' > /tmp/asdfasdf.txt
TEST_CMD=$(cat /tmp/asdfasdf.txt)
TEST_CMD=`echo $TEST_CMD | perl -pe 's/([^&\"])long([^\w\"])/$1long_$2/g' | perl -pe 's/([^&\"]signed)([^\w\"])/$1_$2/g'`
# echo $PARAMETERS
# PARAMETERS=`echo $PARAMETERS | perl -pe 's/(.*),\s*/$1/; $_=$1'`
[ -z "$PARAMETERS" ] && REQUEST_CMD="request(\"$METHOD_NAME\");" || REQUEST_CMD="std::string requestParameters; $TEST_CMD; request(\"$METHOD_NAME\", requestParameters);"
echo -e " {\n\t$REQUEST_CMD\n}"