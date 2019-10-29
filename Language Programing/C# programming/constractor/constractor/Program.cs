using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace constractor
{
    class Program
    {
        class Box
      { 
    public int l,b,h;
    public Box()
    { 
    Console.WriteLine("WANT OT BE A PROGRAMMER");
    }
     public Box(int x,int y,int z)
    { 
         l=x;b=y;h=z;
    }
       public void showData()
     { 
     Console.WriteLine("LENGTH:"+l);
     Console.WriteLine("BREATH:"+b);
     Console.WriteLine("HEIGHT:"+h);
     }
       }

        static void Main(string[] args)
        {
            Box b1 = new Box();
            Box b2 = new Box(10, 15, 20);
            b2.showData();
        }
    }
}
