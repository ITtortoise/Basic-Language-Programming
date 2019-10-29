#include<stdio.h>
int main()
{
    int n,i;
    float sum=1,mul=1;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        mul=mul*i;
        sum=sum+((float)1/mul);
    }
      printf("%f",sum);
}
