using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;

namespace Standard_Templete_Library
{
    public class Dictionary_Class
    {
        public static void Main(string[] args)
        {
            //Dictionary<string, string> openWith = new Dictionary<string, string>();

            //for (int i = 0; i < 5; i++)
            //{
            //    var line = Console.ReadLine().Split(' ');
            //    openWith.Add(line[0], line[1]);
            //}
            //foreach (var item in openWith)
            //{
            //    Console.WriteLine($"{item.Key} {item.Value}");
            //}
           

            //var mysortedDic = new SortedDictionary<int, string>();

            //for (int i = 0; i < 5; i++)
            //{
            //    var line = Console.ReadLine().Split(' ');
            //    try
            //    {
            //        mysortedDic.Add(int.Parse(line[0]), line[1]);
            //    }
            //    catch
            //    {

            //    }
               
            //}
            //foreach (var item in mysortedDic)
            //{
            //    Console.WriteLine($"{item.Key} {item.Value}");
            //}
            //var lastvalue = mysortedDic[4];
            //var res = mysortedDic.Count;
            ////var val = mysortedDic.Values.OrderBy(x => x.Key).Last();
            //var lastDicVal = mysortedDic.Values.Last();
            //var FirstKey = mysortedDic.Keys.First();

            var list = new List<int>();
            var fredic = new SortedDictionary<int, int>();
            for (int i = 0; i < 6; i++)
            {
                int k = int.Parse(Console.ReadLine());
                list.Add(k);
                             
                if(fredic.ContainsKey(k))
                    fredic[k] +=1;
                else
                  fredic.Add(k,1);

            }
            var res = from s in list
                      group s by s;
            foreach (var Group in res)
            {
                Console.WriteLine($"Group : {Group.Key} {Group.Count()}");

                //foreach (var item in Group)
                //{
                //    Console.WriteLine(item);
                //}
            }
            foreach (var item in fredic)
            {
                Console.WriteLine($"{item.Key} : {item.Value}");
            }

            
        }
    }
}
