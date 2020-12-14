using System;
using System.Collections.Generic;
using System.Text;

namespace LSPDemo
{
    public interface IEmployee
    {
         int Id { get; set; }
         string  Name { get; set; }
         decimal GetMinimunSalary();

    }
}
