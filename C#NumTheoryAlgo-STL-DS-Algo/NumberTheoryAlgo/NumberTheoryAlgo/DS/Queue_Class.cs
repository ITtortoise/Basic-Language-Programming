using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;

namespace DS
{
    public class Queue_Class
    {
        public static void Main(string[] args)
        {
            Queue queue = new Queue();
            queue.Enqueue(3);
            queue.Enqueue(2);
            queue.Enqueue(1);
            queue.Enqueue("Four");
            queue.Dequeue();
            var ans = queue.Peek();
        }
    }
}
