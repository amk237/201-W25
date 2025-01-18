import sys
# If the user enters a number >= 0 the exit status of this program is 0
# otherwise, the exit status of this program is 1
x = int(input("Enter a number: "))

if x >= 0:
  sys.exit(0)
else:
  sys.exit(1)
