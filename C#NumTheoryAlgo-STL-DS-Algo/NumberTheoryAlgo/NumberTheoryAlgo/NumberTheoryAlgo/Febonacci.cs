using System;
using System.Collections.Generic;
using System.Text;

namespace NumberTheoryAlgo
{
    class Febonacci
    {
        public static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int fib0 = 0, fib1 = 1, fib;
            for (int i = 2; i <= n; i++)
            {
                fib = fib0 + fib1;
                fib0 = fib1;
                fib1 = fib;
                Console.Write(fib + " ");
            }


        }
    }
}
