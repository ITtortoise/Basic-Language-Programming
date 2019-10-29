#include<stdio.h>
int main()
{
    int a[100],num,e,p,i;
    printf("enter elements number:");
    scanf("%d",&num);
    printf("before deletion elements are:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter position of deletion:");
    scanf("%d",&p);
    i=p+1;
    while(i<num-1)
    {
        a[i-1]=a[i];
         i++;
    }
     num--;
     printf("after deletion elements are:");
      for(i=0;i<num;i++)
    {
        printf("%d",a[i]);
    }
}
