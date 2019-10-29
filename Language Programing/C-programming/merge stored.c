#include<stdio.h>
int main()
{
    int b[100],c[100],j,k,m,p,a[1000],i;
    scanf("%d%d",&m,&p);
     for(j=0;j<m;j++)
        scanf("%d",&b[j]);
     for(k=0;k<p;k++)
        scanf("%d",&c[k]);
     if(m<0 && p<0)
        {printf("merge is impossible");
          goto e;}
          for(j=0;j<m;j++)
          {
              for(k=0;k<p;k++)
              {
                for(i=0;i<(m+p);i++)
               {
                  if(b[j]>c[k])
                    a[i]=c[k];
                  else
                    a[i]=b[j];
              }
          }
          }for(i=0;i<(m+p);i++)
             printf("%d",a[i]);


 e:
 return 0;
}
