using System;
using System.Collections.Generic;
using System.Text;

namespace SearchingSortingModule
{
    class MergeSort
    {
        static void Main(string[] args)
        {
            var nm =Console.ReadLine().Split(' ');
            int n = int.Parse(nm[0]);
            int m = int.Parse(nm[1]);
            var line = Console.ReadLine().Split(' ');
            var L = new List<int>();
            for(int i = 0; i <n; i++)
                L.Add(int.Parse(line[i]));
            var line2 = Console.ReadLine().Split(' ');
            var R = new List<int>();
            for (int i = 0; i < m; i++)
                R.Add(int.Parse(line2[i]));
            var A = new List<int>();
            var nL = L.Count;int  nR = R.Count;
             int  x= 0,y=0;
            while(x < nL && y < nR)
            {
                if (L[x] <= R[y])
                {
                    A.Add(L[x]);
                    x++;
                }
                else
                {
                    A.Add(R[y]);
                    y++;
                }
            }
            for(int i=0;i<A.Count;i++)
                Console.Write(A[i]+" ");
            
            
            
        }
    }
}
