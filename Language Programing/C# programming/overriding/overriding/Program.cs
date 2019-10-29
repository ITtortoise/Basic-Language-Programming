using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace overriding
{
    class Program
    {
     class A
   { 
  public void fun(int x)
   {
    Console.WriteLine("class A");
  }
   }
      class B : A
     { 
     public void fun(int x)
     { 
         Console.WriteLine("class B"); 
     }

   }


        static void Main(string[] args)
        {
                    B b=new B();
                    b.fun(5);
        }
    }
}
