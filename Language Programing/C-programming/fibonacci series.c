#include<stdio.h>
int main()
{
    long long int a=0,b=1,fib,n,i;
    printf("enter a number \n");
    scanf("%lld",&n);
    printf("%lld ",b);
    for(i=1; i<=n; i++)
    {
        fib=a+b;
        a=b;
        b=fib;

        printf("%lld ",fib);
    }

}
