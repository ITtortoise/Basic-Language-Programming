using System;
public class SStudent
{
    private int _Id;
    private string _Name;
    private int _passmark = 25;

    public int Passmark
    {
        get
        {
            return this._passmark;
        }
    }
    public int Id
    {
        set
        {
            if (value <= 0)
                throw new Exception("student id can not be negative");

                this._Id = value;
        }
        get
        {
            return this._Id;
        }

    }
    
    public string Name
    {
        set
        {
            if (string.IsNullOrEmpty(value))
                throw new Exception("student name can not be empty");
         
             this._Name = value;
        }
        get
        {
            return this._Name;
        }
    }

}
namespace properties
{
    class Program
    {
        static void Main(string[] args)
        {
            SStudent s1 = new SStudent();
            s1.Id = 21;
            s1.Name="shohag";
  

            Console.WriteLine("student1 id={0}", s1.Id);
            Console.WriteLine("student1 name={0}", s1.Name);
            Console.WriteLine("student1 passmark={0}", s1.Passmark);

        }
    }
}
