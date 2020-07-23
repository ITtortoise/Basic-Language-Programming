using System;
using System.Collections.Generic;

namespace SearchingSortingModule
{
    class BubbleSort
    {
        public static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            var line = Console.ReadLine().Split(' ');
            var mylist = new List<int>();
            for (int i = 0; i < n; i++)
            {
                var val = int.Parse(line[0]);
                mylist.Add(val);
            }
            var r = mylist.Count;
            List<int> sortedList = BubbleSortFuncation(mylist);
        }

        private static List<int> BubbleSortFuncation(List<int> mylist)
        {
            for (int i = 0; i < mylist.Count - 1; i++)
            {
                for (int j = 0; j < mylist.Count - 1 - i; j++)
                {
                    //if (mylist[j] >)
                }
            }
            return mylist;
        }
    }
}
