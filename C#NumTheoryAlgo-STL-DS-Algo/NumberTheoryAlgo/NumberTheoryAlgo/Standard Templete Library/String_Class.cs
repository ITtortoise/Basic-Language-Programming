using System;
using System.Collections.Generic;
using System.Text;

namespace Standard_Templete_Library
{
    public class String_Class
    {
        public static void Main(string[] args)
        {
            
            string s1 = "good";
            string s2 = "good";            
            Console.WriteLine("//two string equlity:");
            if (s2.Equals(s1))
                Console.WriteLine("yes");
            else
                Console.WriteLine("NO");
            Console.WriteLine("//String Concat:");
            string s3 = s1 + s2;
            string s = String.Concat(s1, s2);
            Console.WriteLine( String.Compare(s1, s2));
            Console.WriteLine("//Comparision:");
            string a = "Codes";
            string b = "Dope";

            int x = String.Compare(a, b);
            int y = String.Compare(b, a);

            Console.WriteLine(x);
            Console.WriteLine(y);

            string c = "CodesDope";
            string d = "codesdope";

            int f = String.Compare(c, d);
            int g = String.Compare(d, c, true);

            Console.WriteLine(f);
            Console.WriteLine(g);
            Console.WriteLine("//IndexOf");
            string srt = " ShohagShadaf ";
            Console.WriteLine(srt.IndexOf('h'));
            Console.WriteLine(srt.LastIndexOf('h'));
            Console.WriteLine(srt.Trim());//remove all white sapce character from current string
            Console.WriteLine(srt.Replace('f','t'));
            Console.WriteLine(srt.Replace("Shadaf","Ahamed"));

             srt = "CodesDope";
            //srt = srt.Substring(5);
            srt = srt.Substring(0, 5);

            Console.WriteLine(srt);
            
        }
    }
}
