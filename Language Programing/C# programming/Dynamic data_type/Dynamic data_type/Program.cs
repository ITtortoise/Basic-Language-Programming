using System;
class Demo
{
    dynamic Data = 12;
    public int Method(int A, int B)
    {
        return (A + B) * Data;
    }
}
namespace Dynamic_data_type
{
    class Program
    {
        static void Main(string[] args)
        {

            Demo Obj = new Demo();
            dynamic value1 = 10;
            dynamic value2 = 11;
            dynamic Str = "Your Marks Is: ";
            Console.WriteLine(Str + Obj.Method(value1, value2));
           
        }
    }
}
