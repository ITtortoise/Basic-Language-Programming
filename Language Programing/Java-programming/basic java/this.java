public class Example
{
  private int l,b,h;
  public void setvalue(int x,int y,int z)
{ this.l=l;this.b=b;this.h=h;}
  public int[] getvalue()
{ 
int[] a =new int[4];
a[0]=l;
a[1]=b;
a[2]=h;
return(a);
}

   public static void main(String []args)
  {
        Example e=new Example();
        e.setvalue(4,5,6);

        System.out.println(e.getvalue()[0]);
		System.out.println(e.getvalue()[1]);
		System.out.println(e.getvalue()[2]);

  }
 }
