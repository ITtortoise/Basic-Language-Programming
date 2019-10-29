#include<stdio.h>
int main()
{
    int n,a[100],i,max,p=-1,a1[100],a2[100],q=-1;
    scanf("%d",&n);
    if(n<0)
        {printf("split is impossible");
    goto e;}
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);}
        for(i=0;i<n;i++)
           {
               if(a[i]>0)
        {
            p=p+1;
            printf("a1[%d]=%d\n",p,a[i]);
        }
    }
    printf("\n\n");
         for(i=0;i<n;i++)
         {
               if(a[i]<0)
        {
            q=q+1;
            printf("a2[%d]=%d\n",q,a[i]);
        }
    }
    e:
    return 0;
}
