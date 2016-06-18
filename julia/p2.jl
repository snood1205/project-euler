function fib(a, b, n)
  if n == 0
    return a
  end
  return fib(b, a + b, n - 1)
end

i = 0
f = 0
s = 0
while(f < 4000000)
  f = fib(0, 1, i)
  if f % 2 == 0
    s += f
  end
  i += 1
end
println(s)