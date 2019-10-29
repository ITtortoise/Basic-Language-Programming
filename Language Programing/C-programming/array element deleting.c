#include<stdio.h>
int main()
{
    int a[100],i,j,n,m,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter deleting index:");
    scanf("%d",&m);
    for(i=m;i<n;i++)
        a[i]=a[i+1];
     n=n-1;
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;

}
