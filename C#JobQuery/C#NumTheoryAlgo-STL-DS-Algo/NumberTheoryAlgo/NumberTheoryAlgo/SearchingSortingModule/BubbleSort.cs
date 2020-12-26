using System;
using System.Collections.Generic;

namespace SearchingSortingModule
{
    class BubbleSort
    {
        private static List<int> BubbleSortFuncation(List<int> mylist)
        {
            for (int i = 0; i < mylist.Count - 1; i++)
            {
                for (int j = 0; j < mylist.Count - 1 - i; j++)
                {
                    if (mylist[j] > mylist[j + 1])
                    {
                        int temp = mylist[j + 1];
                        mylist[j + 1] = mylist[j];
                        mylist[j] = temp;
                    }
                }
            }
            return mylist;
        }
        public static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            var line = Console.ReadLine().Split(' ');
            var mylist = new List<int>();
            for (int i = 0; i < n; i++)
            {
                var val = int.Parse(line[i]);
                mylist.Add(val);
            }
           
            List<int> sortedList = BubbleSortFuncation(mylist);
            for(int i =0;i<mylist.Count;i++)
                Console.Write(mylist[i]+" ");
        }

        
    }
}
 
