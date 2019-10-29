using System;

namespace ToString_Override
{
    class Program
    {
        static void Main(string[] args)
        {
            Customer c1 = new Customer();
            c1.First_Name = "shohag";
            c1.Last_Name = "shadaf";

            Console.WriteLine(c1.ToString());


        }
    }
    public class Customer
    {
        public string First_Name { get; set; }
        public string Last_Name { get; set; }

        public override string ToString()
        {
            return this.First_Name + " " + this.Last_Name;
        }

    }
}
