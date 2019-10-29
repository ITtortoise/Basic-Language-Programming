#include<stdio.h>
int fact(int m);
int main()
{
    long long int num,ans,k,l;
    //printf("enter a number");
    scanf("%lld",&num);
    ans=fact(num);
    printf("factorial is %lld\n",ans);
    return 0;

}
int fact(m)
{
    int f,k=0,l=0;
    if(m=1)
    {
        return 0;
    }
    else
    {
        f=m*fact(m-1);
        return f;
    }
}
