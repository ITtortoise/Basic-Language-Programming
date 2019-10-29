public class Test
{ 
  private  int x;

  {
    System.out.println("Instance inatialization block:"+x);
      x=5;} 
   public Test()
  {System.out.println("constructor x:"+x);} 
   public static void main(String []args)
       { 
         Test t=new Test();
       }
}
          
       