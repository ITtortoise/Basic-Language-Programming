using System;

namespace pass_by_value_reference
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 0;
            int n = 10;
            pass_by_ref(ref i); //pass by reference
            Console.WriteLine(i);
            pass_by_val(n);  //pass by value
            Console.WriteLine(n);
        }
        public static void pass_by_ref(ref int j)
        {
            j = 300;
        }
        public static void pass_by_val(int m)
        {

            m = 500;
        }
    }
}
