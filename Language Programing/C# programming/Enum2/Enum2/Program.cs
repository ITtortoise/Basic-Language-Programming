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
                Gender = Gender.male
            };
            cus[1] = new Customer
            {
                Name = "nishat",
                Gender =Gender.female
            };
            cus[2] = new Customer
            {
                Name = "tushar",
                Gender = Gender.unknown
            };

            foreach (Customer customer in cus)
                Console.WriteLine("Name: {0} && Gnder: {1}", customer.Name, GetGender(customer.Gender));



        }


        public static string GetGender(Gender gender)
        {
            switch (gender)
            {
                case Gender.male:
                    return "male";
                case Gender.female:
                    return "female";
                default:
                    return "unkonown";


            }
        }

    }
}
public enum Gender
{
    male,
    female,
    unknown
}
public class Customer
{
    public string Name { get; set; }
    public Gender Gender { get; set; }
}

