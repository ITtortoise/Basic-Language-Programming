using System;
using System.Collections.Generic;
using System.Text;

namespace SingletonDemo
{
    public sealed class Singleton
    {
        private static Singleton instance = null;
        public static int count=0;
        public static Singleton GetInstance()
        {
            if (instance == null)
                instance = new Singleton();
            return instance;          
        }
        private Singleton()
        {
            count++;
            Console.WriteLine($"Counter value :{count}");
        }       
        public void PrintDetails(string message)
        {
            Console.WriteLine($"{message}");
        }
    }
}
