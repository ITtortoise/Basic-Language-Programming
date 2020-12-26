using System;
using System.Collections.Generic;
using System.Text;

namespace Standard_Templete_Library
{
    public class _2dList
    {
        public static void Main(string[] args)
        {
            //var list = new List<List<int>>();
            //var sublist = new List<int>();
            //int n = int.Parse(Console.ReadLine());
            //for (int i = 0; i < n; i++)
            //{
            //    for (int j = 0; j < n; j++)
            //    {
            //        var v = int.Parse(Console.ReadLine());
            //        sublist.Add(v);
            //    }
            //    list.Add(sublist);
            //}
            int[,] arr = new int[3, 4] {
                   {0, 1, 2, 3} ,   
                   {4, 5, 6, 7} ,  
                   {8, 9, 10, 11} 
                };
            int maxsum = 0, ansx=0, ansy=0;
            var dx = new int[4] { -1, 0, 0, 1 };
            var dy = new int[4] { 0, -1, 1, 0 };
          
            for (int i = 0; i < 3; i++)
            {
               
                for (int j = 0; j < 4; j++)
                {
                    int sum = 0;
                    for (int k = 0; k < 4; k++)
                    {
                        int nx = i + dx[k];
                        int my = j + dy[k];
                        if (nx >= 0 && nx < 3 && my >= 0 && my < 4)
                        {
                             sum = sum + arr[nx,my];
                            //if (sum>maxsum)
                            //{
                            //    maxsum = Math.Max(sum, maxsum);
                            //     ansx = i;
                            //     ansy = j;
                            //}                            
                        }
                       
                    }
                    Console.WriteLine($"index[x:y] {i},{j} sum:{sum}");
                }                
            }
           
        }
    }
}
