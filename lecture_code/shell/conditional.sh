#!/bin/bash

if [ $# -ne 1 ]; then
  echo "Usage: $0 number"
  exit
fi

if [ $1 -eq 5 ]; then
  echo "Number is 5"
else
  echo "Number is not 5"
fi
