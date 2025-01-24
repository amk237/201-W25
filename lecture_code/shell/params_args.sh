#!/bin/bash

if [ $# -ne 2 ]; then
  echo "Usage: $0 str1 str2"
  exit
fi

printArgs() {
  echo 'printArgs $1:' $1
  echo 'printArgs $2:' $2
}

echo 'Script $1:' $1
echo 'Script $2:' $2

echo "Calling printArgs $1 $2"
printArgs $1 $2
echo "Calling printArgs $2 $1"
printArgs $2 $1
