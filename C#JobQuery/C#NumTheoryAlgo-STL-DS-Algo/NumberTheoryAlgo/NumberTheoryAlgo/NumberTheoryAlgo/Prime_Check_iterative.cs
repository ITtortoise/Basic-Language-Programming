using System;
using System.Collections.Generic;
using System.Text;

namespace NumberTheoryAlgo
{
    class PrimeCheck_iterative_
    {
        public static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int flag = 0;
            for (int i = 2; i <= Math.Sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag != 0)
                Console.WriteLine("Not Prime");
            else
                Console.WriteLine("Prime");

        }
    }
}
