using System;

namespace NumberTheoryAlgo
{

    class Gcd_Lcm
    {
        private static int Gcd(int a, int b)
        {
            int rem = 1, temp = 0, ans = 0;
            while (rem > 0)
            {
                rem = b % a;
                temp = a;
                a = rem;
                b = temp;
                if (rem > 0)
                    ans = rem;

            }

            return ans;
        }
        static void Main(string[] args)
        {
            var line = Console.ReadLine().Split(' ');
            int a = int.Parse(line[0]);
            int b = int.Parse(line[1]);
            int temp = 0;
            if (a > b)
            {
                temp = b;
                b = a;
                a = temp;
            }
            int ans = Gcd(a, b);
        }


    }
}
