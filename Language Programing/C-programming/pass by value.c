#include<stdio.h>
int pass_by_value(int x,int y);
int main()
{
    int a,b,m,sum;
    printf(" enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    m=a*b;
    printf("before function calling multiplication of x and y is:%d\n",m);
    sum=pass_by_value(a,b);
    printf("after function calling the summation of a and b is:%d",sum);

}
       int pass_by_value(x,y)
       {
           int sum;
           sum=x+y;
           return (sum);
       }
