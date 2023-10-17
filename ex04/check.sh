#!/bin/bash

readonly EXPECTED_ARGS=3
readonly TEST_FILE="test.replace"
readonly RED='\033[0;31m'
readonly GREEN='\033[0;32m'
readonly NC='\033[0m'

# Check argc
if [ $# -ne $EXPECTED_ARGS ]
then
  >&2 printf "${RED}Invalid number of arguments${NC}\n"
  >&2 printf "Usage: bash check.sh {file} {oldString} {newString}\n"
  exit 1
fi

SRC_FILE=$1
OLD_STRING=$2
NEW_STRING=$3

# Compile and execute program
make all
./sed ${SRC_FILE} ${OLD_STRING} ${NEW_STRING} 2>&1 > /dev/null

# Compare program output and sed command result
sed s/${OLD_STRING}/${NEW_STRING}/g ${SRC_FILE} > ${TEST_FILE}
diff ${SRC_FILE}.replace ${TEST_FILE}

if [ $? -eq 0 ]
then
  printf "${GREEN}Test passed${NC}\n"
else
  printf "${RED}Test failed${NC}\n"
fi