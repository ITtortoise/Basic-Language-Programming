using System;
using System.Collections.Generic;
using System.Text;

namespace Standard_Templete_Library
{
    public class _2dList
    {
        public static void Main(string[] args)
        {
            var list = new List<List<int>>();
            var sublist = new List<int>();
            int n = int.Parse(Console.ReadLine());
            for (int i = 0; i < n; i++)
            {
                var line  = Console.ReadLine().Split(' ');
                for(int j = 0; j < n; j++) 
                {
                    var v = int.Parse(line[j]);
                    sublist.Add(v);
                }
                list.Add(sublist);
            }
            int maxsum = 0, ansx=0, ansy=0;
            int[] dx = { -1, 0, 0, 1 };
            int[] dy = { 0, -1, 1, 0 };
            for (int i = 0; i < n; i++)
            {
               
                for (int j = 0; j < n; j++)
                {
                    int sum = 0;
                    for (int k = 0; k < 4; k++)
                    {
                        int nx = i + dx[k];
                        int my = j + dy[k];
                        if (nx >= 0 && nx < n && my >= 0 && my < n)
                        {
                             sum = sum + list[nx][my];
                            if (sum>maxsum)
                            {
                                maxsum = Math.Max(sum, maxsum);
                                 ansx = i;
                                 ansy = j;
                            }                            
                        }
                    }
                 }                
            }
            Console.WriteLine($"Maximum value {maxsum},index[x:y] {ansx}{ansy}");
        }
    }
}
