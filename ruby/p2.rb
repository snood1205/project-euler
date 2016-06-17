def fib a, b, n
  return a if n == 0
  return fib(b,a+b,n-1)
end

sum ||= 0
(1..50).each{|i| sum += fib(0,1,i) if fib(0,1,i).even? && fib(0,1,i) < 4000000}
puts sum 