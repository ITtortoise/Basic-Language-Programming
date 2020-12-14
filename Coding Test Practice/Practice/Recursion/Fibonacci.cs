using System;

namespace Recursion
{
    class Fibonacci
    {
        private static int Fib(int n)
        {
            if (n <= 1)
                return n;
            else
                return Fib(n - 1) + Fib(n - 2);
        }
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int ans = Fib(n);
        }
    }
}
