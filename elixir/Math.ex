defmodule Math do
  def fib(a, b, n) do
    case {a, b, n} do
      {_, _, 0} ->
        a
      _ ->
        fib(b, a+b, n-1)
      end
  end
end