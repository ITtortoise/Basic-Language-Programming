using System;
using System.Collections.Generic;
using System.Text;

namespace PrototypeDemo
{
    public class Email
    {
        //public string  From { get; set; }
        //public string To { get; set; }
        //public string Body { get; set; }
        //public int Port { get; set; }
        public string Username { get; set; }
        public string Password { get; set; }
        public string UseSSL { get; set; }

        public Email Clone()
        {
            return new Email()
            {
                Username = this.Username,
                Password = this.Password,
                UseSSL = this.UseSSL
            };

        }
    }
}
