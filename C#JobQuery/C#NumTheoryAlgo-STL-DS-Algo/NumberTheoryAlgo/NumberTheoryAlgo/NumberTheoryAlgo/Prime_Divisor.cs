using System;
using System.Collections.Generic;
using System.Text;

namespace NumberTheoryAlgo
{
    class Prime_Divisor
    {
        public static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            for (int i = 2; i * i <= n; i++)
            {
                while (n % i == 0)
                {
                    n = n / i;
                    Console.Write($"{i} ");
                }
            }
            Console.WriteLine(n);
        }
    }
}
