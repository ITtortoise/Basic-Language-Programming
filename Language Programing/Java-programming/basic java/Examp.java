/**
 * Created by Back_bencher on 11/25/17.
 */
class  A implements Runnable
{
    public void run()
    {
        for(int i=0;i<=10;i++)
            System.out.print("Thred A:"+i);
    }
}
class  B implements Runnable
{
    public void run()
    {
        for(int i=0;i<=10;i++)
            System.out.print("Thred B:"+i);
    }
}

public class Example {
    public static void main(String []args)
    {
        Thread T1=new Thread(new A());
        Thread T2=new Thread(new B());
        T1.start();
        T2.start();
    }
}
