class A
{ 
  public void fun(int x,int y)
   {System.out.println("class A");}
  }
class B extends A
{ 
  public void fun(int x)
   {System.out.println("class B");}

 }

class Example
  {
   public static void main(String []args)
  { 
        B b=new B();
        b.fun(5);
  }
}