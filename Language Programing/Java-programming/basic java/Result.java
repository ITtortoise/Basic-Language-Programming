public Result extends Information
{ 
   private marks;
   public void setmark(int m)
   { if(marks>=40)
      System.out.println("PASS");
     else
       System.out.println("FAIL");
   }
}