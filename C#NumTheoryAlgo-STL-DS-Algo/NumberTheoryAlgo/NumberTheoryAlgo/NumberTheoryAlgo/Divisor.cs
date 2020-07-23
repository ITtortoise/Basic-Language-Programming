using System;
using System.Collections.Generic;
using System.Text;

namespace NumberTheoryAlgo
{
    class Divisor
    {
        public static void Main(string[] args)
        {
            var n = int.Parse(Console.ReadLine());
            int NOD = 0; int SOD = 0;
            for (int i = 1; i <= Math.Sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    if (n / i != i)
                    {
                        NOD += 2;
                        SOD += i + (n / i);
                    }
                    else
                    {
                        NOD++;
                        SOD += i;
                    }
                }

            }
            Console.WriteLine($"Number of Divisor:{NOD}\nSum of the divisor {SOD}");
        }

    }
}
