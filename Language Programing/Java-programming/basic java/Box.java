class Box
{ 
  private int l,b,h;
  public Box()
   { 
    System.out.println("WANT OT BE A PROGRAMMER");}
  public Box(int x,int y,int z)
    { l=x;b=y;h=z;}
  public void showData()
  { 
    System.out.println("LENGTH:"+l);
    System.out.println("BREATH:"+b);
    System.out.println("HEIGHT:"+h);
  }
  public static void main(String []args)
   { 
     Box b1=new Box();
     Box b2=new Box(10,15,20);
     b2.showData();}

} 
