#include<stdio.h>
int main()
{
    int y1,m1,d1,y2,m2,d2,y,d,m;
    printf("Today is:");
    scanf("%d %d %d",&y1,&m1,&d1);
    printf("Birthday is:");
    scanf("%d %d %d",&y2,&m2,&d2);
    if(d1<d2)
      {
          d1=d1+30;
       m1=m1-1; }
       d=d1-d2;
   if(m2>m1)
       {
           m1=m1+12;
             y1=y1-1;
       }
       m=m1-m2;
       y=y1-y2;
      printf("Age is:");
       printf("%d ",y);
       printf("%d ",m);
       printf("%d",d);

}
