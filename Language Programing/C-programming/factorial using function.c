#include<stdio.h>
int fact(x);
int main()
{
    int a,m;
    printf("before calling function enter the value of a :\n");
    scanf("%d",&a);
    m=fact(a);
    printf("after calling function factorial of a  is %d",m);

}
 int fact(x)
    {
     int m,r=1,i;
       if(x==0 )
     { return (1);}
    if(x!=0)
    {for(i=1;i<=x;i++)
            {r=r*i;}
             return (r) ;}

                 }

