#include<stdio.h>
int main()
{
    int a,b,rem;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
    while(a>0&&b>0)
    {
       rem=a%b;
        a=b;
        b=rem;
    }

    printf("greatest common divisor is %d",a);
    }
     else if(b>a)
    {
    while(a>0&&b>0)
    {
        rem=b%a;
         a=rem;
         b=a;
    }

    printf("greatest common divisor is %d",a);
    }
}
