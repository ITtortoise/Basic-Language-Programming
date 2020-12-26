using System;
using System.Collections.Generic;
using System.Text;

namespace Recursion
{
    class BigMod
    {
        private static int Bigmod(int x, int n, int M)
        {
            if (n == 0)
                return 1;
            else if (n % 2 == 0)
            {
                var y = Bigmod(x, n / 2, M);
                return (y * y) % M;
            }

            else
            {
                var y = x % M;
                return y * Bigmod(x, n - 1, M) % M;
            }

        }
        public static void Main(string[] args)
        {
            int x = 3, n = 3, M = 5;
            var ans = Bigmod(x, n, M);
        }
    }
}
