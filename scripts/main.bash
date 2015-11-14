#!/bin/bash
HEADER_OUTPUT=$2
CPP_OUTPUT=$3
HEADER=`bash ./structurator.bash $1`
REQUEST_PARAMETERS=`bash ./request_parameters.bash $1`
CPP=`bash ./structurator.bash $1 "vkapi::" "$REQUEST_PARAMETERS"`
echo $HEADER >> HEADER_OUTPUT
# echo '=================================='
echo $CPP >> CPP_OUTPUT