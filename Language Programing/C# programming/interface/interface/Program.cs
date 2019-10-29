using System;

public interface I1
{
    void Instruction1();
}
public interface I2 : I1
{
   void Instaction2();

}
public class Customer :I2
{
       public void Instruction1()
        {
            Console.WriteLine("Instruction 1");
        }
        public void Instaction2()
        {
            Console.WriteLine("Instruction 2");
        }

  }


namespace Interface
{
    class Program
{
    static void Main(string[] args)
    {
            Customer C1 = new Customer();
            C1.Instruction1();
            C1.Instaction2();
    }
}
}
