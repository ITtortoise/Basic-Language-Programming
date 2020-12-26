using System;

namespace OCPDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            Employee empJohn = new PermanentEmolyee(1, "John");
            Console.WriteLine($"{empJohn.Id} {empJohn.Name} Bonus : {empJohn.CalculateBonus(15000)}");

            Employee empJason = new TemporaryEmployee(2, "Jason");
            Console.WriteLine($"{empJason.Id} {empJason.Name} Bonus : {empJason.CalculateBonus(10000)}");

        }
    }
}
