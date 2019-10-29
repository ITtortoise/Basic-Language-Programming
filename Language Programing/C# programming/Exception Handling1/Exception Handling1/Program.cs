using System;
using System.IO;
namespace Exception_Handling1
{
    class Program
    {
        static void Main(string[] args)
        {
            StreamReader strmreader = null;
            try
            {
                strmreader = new StreamReader("E:\\sample file\\shohag.txt");
                Console.WriteLine(strmreader.ReadToEnd());
               
            }
            catch (FileNotFoundException ex) 
            {
               
                Console.WriteLine(ex.Message);
                Console.WriteLine(ex.StackTrace);
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
            finally
            {
                strmreader.Close();
                Console.WriteLine("finally block is executed...");

            }
        }
    }
}
