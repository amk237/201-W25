#!/bin/bash

# Consider the difference between these two loops!
for str in one two three "  four  "; do
  echo ${str}
done


for str in one two three "  four  "; do
  echo "${str}"
done
