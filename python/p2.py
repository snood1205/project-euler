def fib(a,b,n):
  if n == 0:
    return a
  return fib(b, a + b, n - 1)

i = 0
s = 0
f = 0 
while f < 4000000:
  f = fib(0, 1, i)
  if f % 2 == 0:
    s += f
  i += 1

print(s)