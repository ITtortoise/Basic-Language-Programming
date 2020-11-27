using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;

namespace ProblemSolvingModule
{
    public class ArrayIndexRotation
    {
        public static void Main(string[] args)
        {
            var arr = new int[5];
            int n = int.Parse(Console.ReadLine());
            var line = Console.ReadLine().Split(' ');
            for(int i = 0; i < n; i++)
            {
                var val = int.Parse(line[i]);
                arr[i]=val;
            }
            var arr2 = new int[5];
            for(int k = 0; k < 6; k++)
            {
                int cnt = k;
                while (cnt < n+k)
                {
                    arr2[(cnt + 1) % n] = arr[cnt%n];
                    cnt++;
                }             
                for (int i = 0; i < n; i++)
                    arr[i]=arr2[i];
               
            }
        }
    }
}
