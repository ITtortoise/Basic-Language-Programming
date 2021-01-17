using System;
using System.Collections.Generic;
using System.Text;

namespace Practice
{
    class ArrayFrequncyCount
    {
        public static void Main()
        {
            //int[] arr = { 1, 2, 3, 2, 2, 3, 2, 2, 3, 3 };
            //int[] amt = new int[10];
            //for (int i = 0; i <arr.Length; i++)
            //{
            //    amt[arr[i]]++;
            //}
            //for (int i = 1; i < 10; i++)
            //{
            //    Console.WriteLine($"{i}:{ amt[i]}");
            //}
            string str = "shohagShadaf";
            int[] amt = new int[1000];
            for (int i = 0; i < str.Length; i++)
            {
                amt[str[i]]++;
            }
            for (int i = 97; i < 123; i++)
            {
                Console.WriteLine($"{(char)i} : {amt[i]}");
            }
        }
    }
}