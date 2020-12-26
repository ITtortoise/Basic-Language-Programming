using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Standard_Templete_Library
{
    class Linq_Class
    {
        public static bool IsTeenager(Student _student)
        {
            return _student.studentAge > 12 && _student.studentAge < 16;
        }
        public class Student
        {
            public int studentId { get; set; }
            public string studentName { get; set; }
            public int studentAge { get; set; }
        }
        public static void Main(string[] args)
        {
            var strList = new List<string>()
            {
                "C# Tutorials",
                "VB.NET Tutorials",
                "Learn C++",
                "MVC Tutorials" ,
                "Java"
            };
            Console.WriteLine("//Linq query syntax"); 
            var result = from s in strList
                         where s.Contains("Tutorials")
                         select s;
            Console.WriteLine("//Linq method Syntax"); 
            var res = strList.Where(x => x.Contains("Tutorials"));
            foreach (var item in res)
                     Console.WriteLine(item);

            List<Student> studentList = new List<Student>()
            {
                new Student { studentId = 1, studentName = "John", studentAge = 13} ,
                new Student { studentId = 2, studentName = "Jmith", studentAge = 14} ,
                new Student { studentId = 3, studentName = "Rose", studentAge = 13} ,
                new Student { studentId = 4, studentName = "Symon", studentAge = 13} ,
                new Student { studentId = 5, studentName = "Robi", studentAge = 14} ,
                new Student { studentId = 6, studentName = "Rthoi", studentAge = 14} ,
                new Student { studentId = 7, studentName = "John", studentAge = 10} 
            };

            Console.WriteLine("//  Linq mathod Systax find out in a range of student"); 

            var teenaageStudent = studentList.Where(s => s.studentAge >= 12 && s.studentAge<=15).ToList<Student>();
            var JStudent = studentList.Where(s => s.studentName.Contains("J")).ToList<Student>();

            Console.WriteLine("//Where clause - LINQ query syntax C#"); 
            var FilteredResult = from s in studentList
                                 where IsTeenager(s)
                                 select s;


            foreach (var item in FilteredResult)
            {
                Console.WriteLine(item.studentName);
            }
            Console.WriteLine("// OrderBy in Query syntax ");
            
            var filtered = from s in studentList
                           orderby s.studentAge
                           select s;
            foreach (var item in filtered)
            {
                Console.WriteLine(item.studentName);
            }
            Console.WriteLine("// orderby decending in Query syntax");
            var filtereddecending = from s in studentList
                           orderby s.studentAge descending
                           select s;
            foreach (var item in filtereddecending)
            {
                Console.WriteLine(item.studentName);
            }
            Console.WriteLine("//orderbyThenby method Syntax");

            var x = studentList.OrderBy(s => s.studentName).ThenBy(s => s.studentAge);
            foreach (var item in x)
            {
                Console.WriteLine($"{item.studentName} {item.studentAge}");
            }
            Console.WriteLine("//oderbyThenbydecending method Syntax");
            var y = studentList.OrderBy(s => s.studentName).ThenByDescending(s => s.studentAge);
            foreach (var item in y)
            {
                Console.WriteLine($"{item.studentName} {item.studentAge}");
            }
            Console.WriteLine("//GroupBy in Query syntax C#");
            var r = from s in studentList
                    group s by s.studentAge;
            foreach (var ageGroup in r)
            {
                Console.WriteLine($"Age : {ageGroup.Key} ");
                foreach (var student in ageGroup)
                {
                    Console.WriteLine(student.studentName);
                }
            }
            Console.WriteLine("// OfType in Query syntax  [ArrayList collection needed]");

            Console.WriteLine("//");
            var MixedList = new ArrayList();
            MixedList.Add("shohag");
            MixedList.Add("Shadaf");
            MixedList.Add(16030);
            MixedList.Add(105306);
            MixedList.Add(new Student { studentId = 30, studentAge = 25, studentName = "Shohag" });

            var stringList = from s in MixedList.OfType<string>()
                             select s;
            var intList = from s in MixedList.OfType<int>()
                            select s;
            var stuList = from s in MixedList.OfType<Student>()
                            select s;
            Console.WriteLine("string List:");
            foreach (var item in stringList)
            {
                Console.WriteLine(item);
            }
            Console.WriteLine("Int List:");
            foreach (var item in intList)
            {
                Console.WriteLine(item);
            }
            Console.WriteLine("Student List:");
            foreach (var item in stuList)
            {
                Console.WriteLine(item.studentName);
            }

           
        }


    }
}
