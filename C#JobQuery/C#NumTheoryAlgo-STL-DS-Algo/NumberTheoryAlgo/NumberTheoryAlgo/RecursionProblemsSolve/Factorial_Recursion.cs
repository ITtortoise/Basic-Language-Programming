using System;
using System.Collections.Generic;
using System.Text;

namespace RecursionProblemsSolve
{
    class Factorial_Recursion
    {
        private static int Fac(int x)
        {
            if (x == 1) return 1;

            return Fac(x - 1) * x;
        }
        public static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            for (int i = 1; i <= n; i++)
            {
                Console.WriteLine($"Fac[{i}]:{Fac(i)}");
            }
        }

    }
}
