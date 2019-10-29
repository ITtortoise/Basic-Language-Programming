using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace abstractclass
{
    class Program
    {
        abstract public class Information
      { 
       private String name;
       private int age;
       public void setname(String n)
      { 
           name=n;
      }
      public void setage(int a)
      { 
          age=a;
      }
      public String getname()
      {
          return(name);
      }
      public int getage()
      {   
          return(age);
      }
       }
      public class Student : Information
      {
          public void fun()
      {
      Console.WriteLine("don’t creat obj for understanding");
      }
}

        static void Main(string[] args)
        {
            Information i=new Student();/*access child clss obj. reference in abstaract clss reference variable*/
                                  

      i.setname("SHOHAG");
      i.setage(20);
      Console.WriteLine("STUDENTS NAME:"+i.getname());
      Console.WriteLine("STUDENTS AGE:"+i.getage());
      

        }
    }
}
