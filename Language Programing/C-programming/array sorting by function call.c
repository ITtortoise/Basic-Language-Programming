#include<stdio.h>
int sorting();
int main()
{
    int a[300],n,t,i,j,p;
    printf("enter the elements number:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
       scanf("%d",&a[i]);

    sorting(a,n);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

}
      int sorting(int A[],int p)
      {
          int t,i,j;
          for(i=0;i<p;i++)
          {
              for(j=i+1;j<p;j++)
                if(A[j]>A[i])
              {
                  t=A[i];
                  A[i]=A[j];
                  A[j]=t;
              }

          }


      }
