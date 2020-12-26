using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;

namespace DS
{
    public class Stack_class
    {
        public static void Main(string[] args)
        {
            var stk = new Stack();
            stk.Push(1);
            stk.Push("shohag");

            var stack = new Stack<int>();
            for (int i = 0; i < 5; i++)
            {
                int n = int.Parse(Console.ReadLine());
                stack.Push(n);
            }
            var m = stack.Peek();
            if(stack.Contains(5))
                Console.WriteLine("YES");
            else
                Console.WriteLine("NO");
            foreach (var item in stack)
            {
                Console.WriteLine(item);
            }
            stack.Pop();
            foreach (var item in stack)
            {
                Console.WriteLine(item);
            }

        }
    }
}
