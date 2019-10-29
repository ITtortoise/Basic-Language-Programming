using System;
public struct Customer
{
    private int _Id;
    private string _Name;
    
    public int Id
    {
        set { this._Id = value; }
        get { return this._Id; }
    }
    public string Name
    {
        set { this._Name =value; }
        get { return this._Name; }
    }
   

    //public Customer(int id,string name )
    //{
    //    this._Id = id;
    //    this._Name = name;

//}

public void PrintDetalils()
    {
        Console.WriteLine(" customer id :{0} && customer name :{1}",this._Id,this._Name);
    }
   
}

namespace structure
{
    class Program
    {
        static void Main(string[] args)
        {
            //Customer C1 = new Customer(12,"SHOHAG");
            //C1.PrintDetalils();
            Customer C2 = new Customer();
            C2.Id = 23;
            C2.Name = "SHOHAG";
            C2.PrintDetalils();

        }
    }
}
