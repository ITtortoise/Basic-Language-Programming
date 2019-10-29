#include<stdio.h>
int main()
{
    int a,b,c,x;
    printf("enter the value of a ,b and c:\n");
    scanf("%d %d O%d",&a,&b,&c);
    if(a<=c)
    {
     printf("enter valid number");
     goto E;
    }
    else
    x=b/(a-c);
    printf("x=%d",x);
    E:
        return 0;
}
