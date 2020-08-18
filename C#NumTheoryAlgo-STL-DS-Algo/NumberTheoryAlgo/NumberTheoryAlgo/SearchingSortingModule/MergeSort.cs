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
            for(int k = 0;k <n; k++)
                L.Add(int.Parse(line[k]));
            var line2 = Console.ReadLine().Split(' ');
            var R = new List<int>();
            for (int k = 0; k < m; k++)
                R.Add(int.Parse(line2[k]));
            
            var A = new List<int>();
            var nL = L.Count;int  nR = R.Count;
            int i = 0, j=0;
            while(i < nL && j < nR)
            {
                if (L[i] <= R[j])
                {
                    A.Add(L[i]);
                    i++;
                }
                else
                {
                    A.Add(R[j]);
                    j++;
                }
            }
            while (i < nL)
            {
                A.Add(L[i]);
                i++;
            }
            while (j < nR)
            {
                A.Add(R[j]);
                j++;
            }
            for (i=0;i<A.Count;i++)
                Console.Write(A[i]+" ");
            
            
            
        }
    }
}
