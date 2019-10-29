#include<stdio.h>
int main()
{
    int n,a[100],i,j,t,h=0;
    //printf("enter elements number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {scanf("%d ",&a[i]);}
    //printf("elements before acending:\n");
    //for(i=0;i<n;i++)
        //printf("%d ",a[i]);
     //printf("elements after acending\n");
     for(i=0;i<n;i++)
     {     //h++;
         for(j=i+1;j<n;j++)
          {
            if(a[j]<a[i])
               {  h++;
                   t=a[j];
               a[j]=a[i];
               a[i]=t;}
           }

          }
     //printf("%d ",a[i]);

     printf("\n%d",h);
}


