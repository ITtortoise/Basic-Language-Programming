using System;

namespace RecursionProblemsSolve
{
    class GCD_Recursion
    {
        private static int Return_Gcd(int a, int b)
        {

            if (a == 0) return b;
            return Return_Gcd(b % a, a);

        }
        public static void Main(string[] args)
        {
            var line = Console.ReadLine().Split(' ');
            int a = int.Parse(line[0]);
            int b = int.Parse(line[1]);
            if (a > b)
            {
                int temp = b;
                b = a;
                a = temp;
            }
            int ans = Return_Gcd(a, b);
            Console.WriteLine(ans);
        }


    }
}
