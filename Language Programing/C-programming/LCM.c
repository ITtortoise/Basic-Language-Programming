#include<stdio.h>
int main()
{
    int a,b,rem,y,x;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    x=a;
    y=b;
    if(a>b)
    {
    while((a%b)!=0)
    {
       rem=a%b;
        b=rem;
        a=b;
    }

    printf("leatest common multiple is %d",(x*y)/b);
    }
     else if(b>a)
    {
    while((b%a)!=0)
    {
        rem=b%a;
        b=a;
        a=rem;
    }

    printf("leatest common multiple is %d",(x*y/a));
    }
}

