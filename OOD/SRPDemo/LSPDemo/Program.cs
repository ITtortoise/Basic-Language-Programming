using System;

namespace LSPDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            Employee ParEmp = new PermanentEmployee(1, "Sham");
            ParEmp.GetMinimunSalary();
            ParEmp.Calculatebonus(100000);
            Employee TemEmp = new TemporaryEmployee(2, "William");
            TemEmp.Calculatebonus(50000);
            TemEmp.GetMinimunSalary();
           
            IEmployee ConEmp = new ContractedEmployee(3, "Khen");
            ConEmp.GetMinimunSalary();    
        }
    }
}
