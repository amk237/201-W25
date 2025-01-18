#!/bin/bash
if [ $# -eq 3 ]; then
  echo "Incorrect number of command line arguments"
  echo "Usage: $0 <string> <filepath> <string>"
else
  echo "Great job you gave $# command line args"
fi
