using System;



    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("enter number :");
            int n=int.Parse(Console.ReadLine());
            even_odd_find_fun(n);
            Program p = new Program();
            p.func(n);
       
        }
        void func(int m)
         {
               if (m > 0)
                   Console.WriteLine("number is positive");
               else 
                   Console.WriteLine("number is negative");
         }
        public static void even_odd_find_fun(int m)
        {
            if (m % 2 == 0)
                Console.WriteLine("number is even");
            else
                Console.WriteLine("number is odd");
        }
      
          

    }

