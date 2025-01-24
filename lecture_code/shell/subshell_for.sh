#!/bin/bash

for word in $(cat alice.txt); do
  echo "The word is: ${word}"
done
