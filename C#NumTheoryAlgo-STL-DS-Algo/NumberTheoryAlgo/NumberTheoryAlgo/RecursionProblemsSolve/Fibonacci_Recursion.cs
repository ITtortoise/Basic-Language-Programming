using System;
using System.Collections.Generic;
using System.Text;

namespace RecursionProblemsSolve
{
    class Fibonacci_Recursion
    {
        private static int Fib(int x)
        {
            if (x == 0 || x == 1) return x;
            return Fib(x - 2) + Fib(x - 1);
        }
        public static void Main(string[] args)
        {
            int x = int.Parse(Console.ReadLine());
            for (int i = 0; i <= x; i++)
                Console.WriteLine($"fib[{i}]:{Fib(i)}");
        }
    }
}
