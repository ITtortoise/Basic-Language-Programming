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
            int n = int.Parse(Console.ReadLine());
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    int v = int.Parse(Console.ReadLine());
                    list[i].Add(v);
                }
            }
            int MX = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; i < n; j++)
                {
                    
                    int sum = list[i][j - 1] + list[i][j + 1] + list[i - 1][j] + list[i + 1][j];
                }
            }
        }
    }
}
