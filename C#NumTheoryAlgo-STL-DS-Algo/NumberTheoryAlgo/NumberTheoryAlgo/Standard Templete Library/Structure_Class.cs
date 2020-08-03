using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;

namespace Standard_Templete_Library
{
    class Structure_Class
    {
        private static int Compare(Student x, Student y)
        {
            if(x.StudentAge == y.StudentAge)
            {
                return y.StudentMarks.CompareTo(x.StudentMarks);
            }
            return x.StudentAge.CompareTo(y.StudentAge);
        }
        public class Student
        {
            public int StudentID { get; set; }
            public string StudentName { get; set; }
            public int StudentAge { get; set; }
            public int StudentMarks { get; set; }
        }
        
        public static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            var mylist = new List<Student>();
            for(int i =0;i<n;i++)
            {
               
                var line = Console.ReadLine().Split(',');
                var Id = int.Parse(line[0]); var Name = line[1];var Age = int.Parse(line[2]); var Marks = int.Parse(line[3]);
                var student = new Student()
                {
                    StudentID = Id,
                    StudentName = Name,
                    StudentAge = Age,
                    StudentMarks = Marks,
                };

                mylist.Add(student);
            }

            mylist.Sort(Compare);

            foreach (var student in mylist)
            {
                Console.WriteLine($"Id ={student.StudentID} Name ={student.StudentName} Age ={student.StudentAge} Marks ={student.StudentMarks}");
            }

        }

        
    }
    
    
}

