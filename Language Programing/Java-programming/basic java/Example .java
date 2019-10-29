class A
{ public int z;
public void f1()
  { System.out.println("class A"+z+"hhh");}
}
class B extends A
{public int z;
public void f1()
    {
super.f1();
}

public void f2()
   {
  int z;
    z=9;
    super.z=2;
    this.z=4;
    System.out.println("Z:"+z);
    }

  
}
class Example
{
    public static void main(String []args)  
     {  
B b=new B();
        b.f1();
       
       
           }
}
