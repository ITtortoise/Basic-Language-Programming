using System;
using System.Collections.Generic;
using System.Text;

namespace SearchingSortingModule
{
    class BinarySearch
    {
        private static int BinarySearch_function(List<int> list, int l, int h, int s)
        {
            if (l <= h)
            {
                int mid = l + (h - l) / 2;
                if (list[mid] == s)
                    return s;
                else if (list[mid] > s)
                    return BinarySearch_function(list, l, mid - 1, s);
                else
                   return BinarySearch_function(list, mid + 1, h, s);
            }
            else
                return -1;
        }
        public static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            var line = Console.ReadLine().Split(' ');
            var list = new List<int>();
            for(int i = 0; i < n; i++)
                list.Add(int.Parse(line[i]));
   
            list.Sort();
            int s = int.Parse(Console.ReadLine());
            int result = BinarySearch_function(list, 0, n - 1, s);
            if(result == s)
                Console.WriteLine("value found");
            else
                Console.WriteLine("value not found");
        }

        
    }
}
