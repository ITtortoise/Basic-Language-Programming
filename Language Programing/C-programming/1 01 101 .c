#include<stdio.h>
int main()
{
    int n,i,j,a;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
         {
        for(j=0;j<i;j++)
           {
             a=(i+j)%2;
           printf("%d ",a);


           printf("\n");}

         }
}
