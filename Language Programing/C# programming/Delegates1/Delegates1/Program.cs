using System;

public delegate void delegatefunction(string Message);

namespace Delegates1
{
    class Program
    {
        static void Main(string[] args)
        {
            //Function("hello world");

            delegatefunction del = new delegatefunction(Function);
            del("hello world");
        }
        public static void Function(string receiver)
        {
            Console.WriteLine(receiver);

        }
    }
        
}
