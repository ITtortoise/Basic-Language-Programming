using System;
using System.Collections.Generic;
using System.Text;

namespace Recursion
{
    class GCD
    {
        private static int CalcGCD(int a, int b)
        {
            if (b % a == 0)
                return a;
            else
                return CalcGCD(b % a, a);
        }
        public static void Main(string[] args)
        {
            int a = 5, b = 28;
            int ans = CalcGCD(a, b);
        }
    }
}
