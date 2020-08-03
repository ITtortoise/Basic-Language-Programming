using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;

namespace Standard_Templete_Library
{
    public class List_Class
    {
        public static void Main(string[] args)
        {
           // var sl1 = new List<KeyValuePair<int, string> >();
            SortedList<int, string> sl1 = new SortedList<int, string>();
            //sl1.Add(new KeyValuePair<int, string> (1,"one"));
            sl1.Add(3, "Three");
            sl1.Add(1, "One");
            sl1.Add(2, "Two");
            sl1.Add(4, "three");
        }
    }
}
