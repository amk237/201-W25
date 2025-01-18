#!/usr/bin/python3
import sys
readFile = False

if len(sys.argv) > 1:
  print(f"My command line arguments were {sys.argv} so I'm reading from files", file=sys.stderr)
  readFile = True
  for fName in sys.argv[1:]:
    f = open(fName, "r")
    text = f.read()
    f.close()
    print(text, end="")

while (not readFile):
  print(f"My command line arguments were {sys.argv}, so I'm reading from stdin!", file=sys.stderr)
  line = sys.stdin.readline()
  if not line:
    break
  print(line, end="")
