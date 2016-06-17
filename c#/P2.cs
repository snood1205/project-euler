public class P2
{
  private static int Fibonacci(int a, int b, int n)
  {
    if(n == 0)
    {
      return a;
    }

    return Fibonacci(b, a + b, n - 1);
  }

  public static void Main()
  {
    int i = 0;
    int fib = 0;
    long sum = 0L;

    while(fib < 4000000)
    {
      fib = Fibonacci(0, 1, i);
      if(fib % 2 == 0)
      {
        sum += (long) fib;
      }
      i++;
    }

    System.Console.WriteLine(sum);
  }
}