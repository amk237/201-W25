#!/usr/bin/python3
import sys

print(f"Length of sys.argv: {len(sys.argv)}")
for i in range(len(sys.argv)):
  print(f"sys.argv[{i}]: {sys.argv[i]}")
