using System;


namespace If_else_statement
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            if (n % 2==0)
                Console.WriteLine("Number is even");
            else
                Console.WriteLine("Number is odd");
        }
    }
}
