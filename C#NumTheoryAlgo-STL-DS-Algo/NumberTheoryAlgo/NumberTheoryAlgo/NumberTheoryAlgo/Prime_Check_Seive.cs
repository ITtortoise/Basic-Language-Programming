using System;
using System.Collections.Generic;
using System.Text;

namespace NumberTheoryAlgo
{
    class Prime_Or_Not_Check_Seive
    {
        public static void Main(string[] args)
        {
            var mylist = new List<int>(1000);
            for (int i = 0; i < 1000; i++) mylist.Add(0);

            for (int i = 2; i <= Math.Sqrt(1000); i++)
            {
                if (mylist[i] == 0)
                {
                    for (int j = i * i; j < 1000; j += i)
                    {
                        mylist[j] = 1;
                    }
                }
            }

            int n = int.Parse(Console.ReadLine());

            if (mylist[n] == 0)
                Console.WriteLine("Prime");
            else
                Console.WriteLine("Not Prime");



        }

    }
}
