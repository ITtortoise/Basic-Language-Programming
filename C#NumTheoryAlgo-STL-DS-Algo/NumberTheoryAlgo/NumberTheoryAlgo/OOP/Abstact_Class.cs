using System;
using System.Collections.Generic;
using System.Text;

namespace OOP
{
    public abstract class Parent
    {
        public abstract void fun();
    }
    public class Child : Parent
    {
        public override void fun()
        {
            Console.WriteLine("i am from child class");          
        }
    }
    class Abstact_Class
    {
        public static void Main(string[] args)
        {
            var ch1 = new Child();
            ch1.fun();
        }
    }
}
