#include<stdio.h>
int main()
{
    float a,b,r;
    int n;
    printf("enter the value of a and b:\n");
    scanf("%f%f",&a,&b);
    printf("press 1 for summation:\npress 2 for substruction:\npress 3 for multiplication:\npress 4 for division:\n");
    scanf("%d",&n);

    switch(n)
       {

          case 1:
          {r=a+b;
          printf("the result is %.2f",r);
          break;}
          case 2:
          {r=a-b;
          printf("the result is %.2f",r);
          break;}
          case 3:
         {
            r=a*b;
          printf("the result is %.2f",r);
          break;
         }
          case 4:
         {
          r=a/b;
          printf("the result is %.2f",r);
          break;
         }
          default:
            printf("press valid key.");
       }
}
