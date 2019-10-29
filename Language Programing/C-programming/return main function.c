#include<stdio.h>
int multiply(int x,int y);
int main()
{
    int a,b,m;
    printf("before calling function enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    m=multiply(a,b);
    printf("after calling function multiplication of a and b is %d",m);

}
 int multiply(x,y)
    {
     int m;
     m=x*y;
   return (m);}
