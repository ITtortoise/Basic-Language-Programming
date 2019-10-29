using System;

namespace Enum
{
    class Program
    {
        static void Main(string[] args)
        {
            Customer[] cus = new Customer[3];

            cus[0] = new Customer
            {
                Name = "shohag",
                Gender = 1
            };
            cus[1] = new Customer
            {
                Name = "nishat",
                Gender = 2
            };
            cus[2] = new Customer
            {
                Name = "tushar",
                Gender = 0
            };
        
            foreach (Customer customer in cus)
                Console.WriteLine("Name: {0} && Gnder: {1}", customer.Name,GetGender(customer.Gender));



        }


        public static string GetGender(int gender)
        {
            switch (gender)
            {
                case 1:
                    return "male";
                case 2:
                    return "female";
               
                default:
                    return "unkonown";
             

            }
        }

    }
}
    public class Customer
    {
        public string Name { get; set; }
        public int Gender { get; set; }
    }

