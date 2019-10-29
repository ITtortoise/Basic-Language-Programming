using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace multilevel_inheritance
{
    class Program
    {
        class Car
        {
            public void vehicleType()
            {
                Console.WriteLine("Vehicle Type: Car");
            }
        }

        class Maruti : Car
        {
            public void brand()
            {
                Console.WriteLine("Brand: Maruti");
            }
            public void speed()
            {
                Console.WriteLine("Max: 90Kmph");
            }
        }
        public class Maruti800 : Maruti
        {
            public void spee()
            {
                Console.WriteLine("Max: 80Kmph");
            }
        }

            static void Main(string[] args)
            {
                Maruti800 obj = new Maruti800();
                obj.vehicleType();
                obj.brand();
                obj.speed();

            }
        }
    }

