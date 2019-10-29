#include<stdio.h>
int pass_by_reference(int *x,int *y);
int main()
{
    int a,b,m,sum,s;
    printf(" enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    /* m=a*b;
    printf("before function calling multiplication of x and y is:%d\n",m);*/
    s=pass_by_reference(&a,&b);
    printf("after function calling the summation of a and b is:%d",s);
}
       int pass_by_reference(int *x,int *y)
       {
           int *sum;
           *sum=*x+*y;
           return (*sum);
       }

