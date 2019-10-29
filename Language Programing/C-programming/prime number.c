#include<stdio.h>
//#include<math.h>
int main()
{
    int n,i,rem,count=0,m;
    printf("enter a number \n");
    scanf("%d",&n);
   // m=sqrt(n);
    if(n==2)
        {printf("number is prime\n");
        goto E;}

     if(n%2==0)
       {
        printf("Number is not prime\n");
  goto E;
       }
    for(i=2;i<n;i++)
        {
            rem=n%i;
            if(rem==0)
                count++;
        }


    if(count==0)
       printf("number is  prime");
    else if(count=!0)
       printf("number is not prime ");
        E:
       return 0;
}
