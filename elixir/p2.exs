fib = fn
  a,b,0 -> a
  a,b,n -> fib.(b, a+b, n-1)
end
IO.puts Enum.sum(Enum.filter(Enum.map(1..50, fn n -> fib.(0,1,n) end ), even and fn(x) -> x < 4000000 end))