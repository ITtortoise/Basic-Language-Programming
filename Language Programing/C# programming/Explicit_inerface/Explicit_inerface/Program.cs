using System;
interface I1
{
    void CusDtails();
}
interface I2
{
    void CusDtails();
}

   public class Program :I1,I2
    {
       public void CusDetails()
        {
            Console.WriteLine("I am customer and my name is shohag");
        }
        public  static void Main(string[] args)
        {
            Program P1 = new Program();
           // ((Customer1)P1).CusDtails();
        }
    }