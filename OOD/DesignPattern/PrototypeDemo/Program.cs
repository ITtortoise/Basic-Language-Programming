using System;

namespace PrototypeDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            Email email = new Email();
            email.Username = "jalal";

            var email2 = email.Clone();
            var email3 = email.Clone();
            email2.Username = "shohag";
        }
    }
}
