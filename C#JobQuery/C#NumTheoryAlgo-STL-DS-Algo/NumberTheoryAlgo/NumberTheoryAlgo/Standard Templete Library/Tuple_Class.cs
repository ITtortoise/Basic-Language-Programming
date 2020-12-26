using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;
namespace Standard_Templete_Library
{
    public class Tuple_Class
    {
        private static int Compare(Tuple<int, int, int> x, Tuple< int, int, int> y)
        {
            if (x.Item1 == y.Item1)
            {
                if (x.Item2 == y.Item2)
                {
                    return y.Item3.CompareTo(x.Item3);
                }
                return y.Item2.CompareTo(x.Item2);

            }
           
            return y.Item1.CompareTo(x.Item1);
        }


        public static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            var myTupleList = new List<Tuple< int,  int, int>>();
            for(int  i = 0; i < n; i++)
            {
                var line = Console.ReadLine().Split(',');
                int Height  = int.Parse(line[0]); int Age = int.Parse(line[1]);int Marks = int.Parse(line[2]);
                myTupleList.Add(new Tuple<int,  int, int>(Height,  Age, Marks));
               
            }
            myTupleList.Sort(Compare);
          
        }

       
        
    }
}
