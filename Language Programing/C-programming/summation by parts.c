#include<stdio.h>
int main()
{
    int n,i;
    float sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      sum=sum+((float)1/i);
      printf("%f",sum);
}
