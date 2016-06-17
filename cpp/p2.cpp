#include <iostream>

int fibonacci(int a, int b, int n)
{
  if(n == 0)
  {
    return a;
  }

  return fibonacci(b, a + b, n - 1);
}

int main(int argc, char ** argv)
{
  int i = 0;
  int fib = 0;
  long sum = 0L;

  while(fib < 4000000)
  {
    fib = fibonacci(0, 1, i);
    if(fib % 2 == 0)
    {
      sum += (long) fib;
    }
    i++;
  }

  std::cout << sum << std::endl;

  return 0;
}