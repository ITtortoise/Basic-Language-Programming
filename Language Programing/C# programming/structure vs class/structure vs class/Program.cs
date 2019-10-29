using System;

public class Customer
{
    private string name;
    public string Name
    {
    set { this.name = value; }
    get { return this.name; }
    }
}

namespace structure_vs_class
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 10;
            int j = i;//indiacte different memory location
            j++;
            Console.WriteLine("i={0} , j={1}",i,j);
            Customer C1 = new Customer();
            Customer C2 = new Customer();
            C1.Name = "shohag";
            C2 = C1;//indicate the same memory location
            C2.Name = "shadaf";
            Console.WriteLine("intially name is:{0} && at last name is:{1}", C1.Name, C2.Name);
            
        }
    }
}
