//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace RandomPractice
//{
//    class _2ndMaxValAarry
//    {
//        private static int  CalSecondMx(int[] arr)
//        {
//            int fmax = 0, smax=0;
//            for (int i = 0; i < arr.Length; i++)
//            {
//                if (arr[i] > fmax)
//                {  
//                    smax = fmax;
//                    fmax = arr[i];
//                }
//               if (arr[i]>smax&&arr[i]<fmax)
//                    smax = arr[i];
//            }
//            return smax;
//        }
//        public static void Main()
//        {
//            var arr = Array.ConvertAll(Console.ReadLine().Split(' '), e => int.Parse(e));
//            int ans = CalSecondMx(arr);
//            Console.WriteLine(ans);
//        }      
//    }
//}
