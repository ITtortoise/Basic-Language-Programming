using System;
using System.Collections.Generic;
using System.Text;

namespace Standard_Templete_Library
{
    public class Pair_Class
    {
        static int Compare1(KeyValuePair<int, string> a, KeyValuePair<int, string> b)
        {
            return a.Key.CompareTo(b.Key);
        }
        static int Compare2(KeyValuePair<int, string> a, KeyValuePair<int, string> b)
        {
            return a.Value.CompareTo(b.Value);
        }
        public static void Main(string[] args)
        {
            var list = new List<KeyValuePair<int, string>>();
                list.Add(new KeyValuePair<int, string>(3, "three"));
                list.Add(new KeyValuePair<int, string>(4, "Four"));
                list.Add(new KeyValuePair<int, string>(1, "one"));
                list.Add(new KeyValuePair<int, string>(2, "two"));
                
            list.Sort(Compare1);

            
            foreach (var item in list)
            {
                Console.WriteLine($"{item.Key} : {item.Value}");
            }

            list.Sort(Compare2);

            foreach (var item in list)
            {
                Console.WriteLine($"{item.Key} : {item.Value}");
            }
        }

       
    }
}
