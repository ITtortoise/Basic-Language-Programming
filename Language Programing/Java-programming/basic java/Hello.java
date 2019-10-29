class Account
{
 private int account_no,balance;
 private static int roi;
 public void set_data(int a,int b)
   {
    account_no=a;
     balance=b;}
  public static void set_value(int r)
   {
    roi=r;}
public static class Test
   {
  public static String bank_name="SONALY BANK";}
 public void show_data()
  {
   System.out.println("ACCOUNT NO:"+account_no);
   System.out.println("BALANCE:"+balance);
   System.out.println("RATE OF INTEREST:"+roi);
   }
}

public class Hello
{
public static void main(String [] args)
{
   Account A1=new Account();
   A1.set_data(1010019876,200000);
   Account.set_value(5);
   A1.show_data();
   System.out.println(Account.Test.bank_name);

}
}
