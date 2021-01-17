using System;
using System.Collections.Generic;
using System.Text;

namespace Standard_Templete_Library
{
    public class Pair_Class
    {
        static int Compare(KeyValuePair<int, int> a, KeyValuePair<int, int> b)
        {
            if (a.Key == b.Key)
                return a.Value.CompareTo(b.Value);
            return a.Key.CompareTo(b.Key);
        }
        public static void Main(string[] args)
        {
            var list = new List<KeyValuePair<int, int>>();
                list.Add(new KeyValuePair<int, int>(1,3));
                list.Add(new KeyValuePair<int, int>(1,2));
                list.Add(new KeyValuePair<int, int>(2,5));
                list.Add(new KeyValuePair<int, int>(3,6));
                
            list.Sort(Compare);

            
            foreach (var item in list)
            {
                Console.WriteLine($"{item.Key} : {item.Value}");
            }

            Console.WriteLine();
            //list.Sort(Compare2);

           
        }

       
    }
}
