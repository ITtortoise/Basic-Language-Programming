using System;

namespace Array
{
    class Program
    {
        static void Main(string[] args)
        {

            int[] arr = new int[1000];
            Console.WriteLine("Enter number of array element:");
            int n=int.Parse(Console.ReadLine());
            for(int i=0;i<n;i++)
              arr[i]=int.Parse(Console.ReadLine());
    
            for(int i=0;i<n;i++)
              Console.WriteLine(arr[i] );

              
        }
    }
}
