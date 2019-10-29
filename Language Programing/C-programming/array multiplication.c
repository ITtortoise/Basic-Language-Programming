#include<stdio.h>
int main()
{
    int a[10][10],i,j;
     for(i=0;i<5;i++)
     {
         for(j=0;j<5;j++)
            a[i][j]=(i+1)*(j+1);
     }
       for(i=0;i<5;i++)
     {
         for(j=0;j<5;j++)
            printf("%4d",a[i][j]);
            printf("\n\n");
     }
}
