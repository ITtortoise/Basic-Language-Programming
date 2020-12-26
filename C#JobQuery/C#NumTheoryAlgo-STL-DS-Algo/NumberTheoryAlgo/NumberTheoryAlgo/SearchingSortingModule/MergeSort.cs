using System;
using System.Collections.Generic;
using System.Text;

namespace SearchingSortingModule
{
    class MergeSort
    {
        static void Main(string[] args)
        {
            var arr1 = new int[5]{ 2, 5, 7, 10, 12 };
            var arr2 = new int[6] { 1, 3, 13,17,18,19 };
            var arr3 = new int[8];
            int i = 0, j = 0, k = 0;
            while (i < 5 && j < 6)
            {
                if (arr1[i] < arr2[j])
                    arr3[k++] = arr1[i++];
                else
                    arr3[k++] = arr2[j++];
            }
            while (i < 5)
                arr3[k++] = arr1[i++];
            while (j < 6)
                arr3[k++] = arr2[j++];
        }
    }
}
