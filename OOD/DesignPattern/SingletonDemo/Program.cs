using System;

namespace SingletonDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            var obj = Singleton.GetInstance();
            obj.PrintDetails("This is from employee");
            obj.PrintDetails("This is from students");
        }
    }
}
