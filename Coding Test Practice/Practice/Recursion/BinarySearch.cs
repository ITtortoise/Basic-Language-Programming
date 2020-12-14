using System;
using System.Collections.Generic;
using System.Text;

namespace Recursion
{
    class BinarySearch
    {
        private static int BS(int[] arr, int l, int h, int s)
        {
            if (l <= h)
            {
                int mid = (l + h) / 2;
                if (arr[mid] == s)
                    return s;
                else if (arr[mid] > s)
                    return BS(arr, l, mid - 1, s);
                else
                    return BS(arr, mid + 1, h, s);
            }
            else
                return -1;
        }
        public static void Main(string[] args)
        {
            var arr = Array.ConvertAll(Console.ReadLine().Split(' '), e => int.Parse(e));
            var s = int.Parse(Console.ReadLine());
            int ans = BS(arr, 0, arr.Length - 1, s);
            if (ans > 0)
                Console.WriteLine("value found");
            else
                Console.WriteLine("Not found");
        }
    }
}
