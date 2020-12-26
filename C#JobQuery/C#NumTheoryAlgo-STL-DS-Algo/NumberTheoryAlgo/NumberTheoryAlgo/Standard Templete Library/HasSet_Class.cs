using System;
using System.Collections.Generic;
using System.Text;

namespace Standard_Templete_Library
{
    public class HasSet_Class
    {
        public static void Main(string[] args)
        {
            var openWith = new SortedSet<int>();
            var line = Console.ReadLine().Split(' ');
            for (int i = 0; i <5; i++)
            {
                int val = int.Parse(line[i]);
                //if (!openWith.Contains(val))
                //    openWith.Add(val);
                try
                {
                    openWith.Add(val);
                }
                catch
                {

                }

            }
                
            foreach (var item in openWith)
            {
                Console.WriteLine($"{item}");
            }
            
        }
    }
}
