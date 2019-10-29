using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace switchcase
{
    class Program
    {
        static void Main()
        {
            Console.WriteLine("Enter Your Pincode:");
             int n=int.Parse(Console.ReadLine());

             switch (n)
             { 
                 case 1:
                     {Console.WriteLine("You r an Engineer");
                     break;}
                 case 2:
                     {Console.WriteLine("You r a doctor");
                     break;}
                 case 3:
                     {Console.WriteLine("You r a BCS cader");
                     break;}
                 default:
                     {Console.WriteLine("You r nothing");
                     break;}

             }
            // Main();
        }
    }
}
