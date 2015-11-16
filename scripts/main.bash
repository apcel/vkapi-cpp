#!/bin/bash
HEADER_OUTPUT=$2
CPP_OUTPUT=$3
HEADER=`bash ./structurator.bash $1`
REQUEST_PARAMETERS=`bash ./request_parameters.bash $1`
CPP=`bash ./structurator.bash $1 "vkapi::" "$REQUEST_PARAMETERS"`
echo $HEADER >> $HEADER_OUTPUT
# echo '=================================='
echo "/*************************************************************************/" >>  $CPP_OUTPUT
echo $CPP | perl -pe ' s/;;/;/g; s/\sif\s/\nif /g; s/{/{\n/g; s/};/};\n/g; chomp;' >> $CPP_OUTPUT
