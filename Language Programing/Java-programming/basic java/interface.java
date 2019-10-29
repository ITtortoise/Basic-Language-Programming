interface I1
{   void f1();}
interface I2
{  void f2();}
class A implements I1,I2
{  
   public void  f1()
   { system.out.println("IMPLEMENTS OF INTERFACE I1");}
    public void  f2()
   { system.out.println("IMPLEMENTS OF INTERFACE I2");}
   public void  f3()
   { system.out.println("THIS IS CLASS A FUNCTION");}
   
}
class Example
{ public static void main(String []args)
	{ A a=new A();
	  a.f1();
	  a.f2();
	  a.f3();}
}
/*next step:
it is impossible to creat an object of interface but it is possible to creat an    
reference variable of an interface)*/