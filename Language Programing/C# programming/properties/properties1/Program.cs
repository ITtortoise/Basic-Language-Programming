using System;
public class Student
{
    private int _id;
    private string _name;
    private int _passmark = 25;
    public void Setid(int id)
    {
        //if (id <= 0)
        //    throw new Exception("student id can not be negative");
        //else
            this._id = id;


    }
    public int Getid()
    {
        return (_id > 0) ? _id : -1;
        //if (_id < 0) return (-1);

        //else
        //    return (_id);
    }
    public void Setname(string name)
    {
        //if (string.IsNullOrEmpty(name))
        //    throw new Exception("student name can not be empty");
        //else
            this._name =name;
    }
    public string Getname()
    {
        return string.IsNullOrEmpty(_name) ? "no name" : _name;
        //if (string.IsNullOrEmpty(this._name))
        //    return "aline";
        //else 
        //    return this._name;
    }

}
namespace properties1
{
    class Program
    {
        static void Main(string[] args)
        {
            Student s1 = new Student();
            s1.Setid(-25);
            s1.Setname("");

            Console.WriteLine("student1 id={0}", s1.Getid());
            Console.WriteLine("student1 name={0}", s1.Getname());

        }
    }
}
