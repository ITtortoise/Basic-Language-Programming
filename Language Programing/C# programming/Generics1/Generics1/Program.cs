using System;

namespace Generics1
{

    class Program
    {
        static void Main(string[] args)
        {
            bool Equal = Calculator.AreEqual<int>(10, 10);//FUNCTION GENCRIC//(class genric)Calculator<int>
            if (Equal)
            {
                Console.WriteLine("both r equals");

            }
            else
            {
                Console.WriteLine("not equal");
            }


        }
    }
    public class Calculator//class gencric (calcuator<T>)
    {
       public static bool AreEqual <T>( T Value1, T value2)//FUNCTION GENCRIC
       {
            return Value1.Equals(value2);
       }
    }
    
}
