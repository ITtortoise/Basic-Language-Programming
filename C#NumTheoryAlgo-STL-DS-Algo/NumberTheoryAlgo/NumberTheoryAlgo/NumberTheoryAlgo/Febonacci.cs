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
            int fib0 = 0, fib1 = 1, fib2;
            for (int i = 2; i <= n; i++)
            {
                fib2 = fib0 + fib1;
                fib0 = fib1;
                fib1 = fib2;
                Console.Write(fib2 + " ");
            }


        }
    }
}
