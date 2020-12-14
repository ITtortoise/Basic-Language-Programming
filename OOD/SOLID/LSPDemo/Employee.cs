using System;
using System.Collections.Generic;
using System.Text;

namespace LSPDemo
{
    public abstract class Employee :IEmployee ,IEmployeeBonus
    {
        public int Id { get; set; }
        public string Name { get; set; }

        public Employee(int id, string name)
        {
            Id = id;
            Name = name;
        }
        public abstract decimal GetMinimunSalary();
        public abstract decimal Calculatebonus(decimal salary);
    }
    public class PermanentEmployee : Employee
    {
        public PermanentEmployee(int id,string name) : base(id, name){}
        public override decimal Calculatebonus(decimal salary)
        {
            return salary * .1M;
        }
        public override decimal GetMinimunSalary()
        {
            return 10000;
        }
    }
    public class TemporaryEmployee : Employee
    {
        public TemporaryEmployee(int id, string name) : base(id, name) { }
        public override decimal Calculatebonus(decimal salary)
        {
            return salary * .05M;
        }
        public override decimal GetMinimunSalary()
        {
            return 10000;
        }
    }
    public class ContractedEmployee : IEmployee
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public ContractedEmployee(int id,string name)
        {
            Id = id;
            Name = name;
        }
        public decimal GetMinimunSalary()
        {
            return 10000;
        }
    }

}
