using System;

namespace tarnary_operator
{
    class Program
    {
        static void Main(string[] args)
        {
            int input;
            string classify;

            input = int.Parse(Console.ReadLine());
            if (input >= 0)
            {
                classify = "nonnegative";
            }
            else
            {
                classify = "negative";
            }

           
            Console.WriteLine( classify = (input >= 0) ? "nonnegative" : "negative");
        }
    }
}
