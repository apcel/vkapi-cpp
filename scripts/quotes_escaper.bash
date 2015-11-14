#!/bin/bash
perl -pi -e 's/([^\\])\"/$1\\\"/m' $1