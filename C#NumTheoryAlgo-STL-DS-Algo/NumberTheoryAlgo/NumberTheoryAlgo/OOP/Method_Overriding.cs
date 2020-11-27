using System;
using System.Collections.Generic;
using System.Text;

namespace OOP
{
    public abstract class  Parent
    {
        public abstract void Running();
       
    }
    public class Child1 : Parent
    {
        public override void Running()
        {
            // base.Running();
            Console.WriteLine("Running Method of ChildClass1");
        }
    }
    public class Child2 : Parent
    {
        public override void Running()
        {
            // base.Running();
            Console.WriteLine("Running Method of ChildClass1");
        }
    }

    class Method_Overriding
    {
        static void Main(string[] args)
        {
            var child1 = new Child1();
            child1.Running();
            var child2 = new Child2();
            child2.r
        }
    }
}
