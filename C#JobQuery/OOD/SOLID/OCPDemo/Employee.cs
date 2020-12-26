using System;
using System.Collections.Generic;
using System.Text;

namespace OCPDemo
{
    public abstract class Employee
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public Employee(int id,string name)
        {
            Id = id;
            Name = name;
        }
        public abstract decimal CalculateBonus(decimal salary);

    }
    public class PermanentEmolyee : Employee
    {
        public PermanentEmolyee(int id,string name):base(id,name){ }
        public override decimal CalculateBonus(decimal salary)
        {
            return salary * .1M;
        }
    }
    public class TemporaryEmployee : Employee
    {
        public TemporaryEmployee(int id, string name) : base(id, name){ }
        public override decimal CalculateBonus(decimal salary)
        {
            return salary * .05M;
        }
    }

}
