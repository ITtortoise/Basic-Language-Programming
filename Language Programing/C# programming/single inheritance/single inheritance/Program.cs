using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace single_inheritance
{
    class Program
    {
        public class person
      {
        private String name;
        public void SetName(String n)
         { 
            name=n;
         }
       
        public String getname()
         {
            return(name);
        }
       
       }


       public class Student : person
      {
          private int ID;
      public void SetID(int r)
      { 
          ID=r;
      }
      public int getID()
      {
          return (ID);
      }
          }


        static void Main(string[] args)
        {
            Student s1=new Student();
            s1.SetName("SHOHAG");
            s1.SetID(16030);
            Console.WriteLine("NAME:"+s1.getname()); 
            Console.WriteLine("ID:" + s1.getID());

        }
    }
}
