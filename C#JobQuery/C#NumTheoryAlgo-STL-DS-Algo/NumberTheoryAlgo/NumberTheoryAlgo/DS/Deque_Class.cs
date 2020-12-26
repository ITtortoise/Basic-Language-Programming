using Nito.Collections;
using System;
using System.Collections.Generic;
using System.Text;

namespace DS
{
    public class Deque_Class
    {
        public static void Main(string[] args)
        {
            var mydeque = new Deque<int>();
            mydeque.AddToFront(5);
            mydeque.AddToFront(7);
            mydeque.AddToFront(6);
            mydeque.AddToBack(100);
            mydeque.RemoveFromFront();

        }
    }
}
