def times2(x):
  x = x*2

def times3(x):
  x[0] = x[0]*3

x = 10
times2(x)
print(x)

y = [10]
times3(y)
print(y[0])
