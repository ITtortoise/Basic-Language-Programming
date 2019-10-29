#include<stdio.h>
int main()
   {
    int a[10],i,n,sum=0;
    printf("enter elements number:");
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);

     printf("square of elements are:\n");
     for(i=0;i<n;i++)
    printf("%d ",a[i]*a[i]);

      printf("\nsummatiom of array's elements square is:");
      for(i=0;i<n;i++)
      sum=sum+a[i]*a[i];
  printf("%d",sum);}
