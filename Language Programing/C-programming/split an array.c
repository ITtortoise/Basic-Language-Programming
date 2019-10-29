#include<stdio.h>
int main()
{
    int a[300],b[150],c[150],p,max,i=0,k=-1,j=-1;

       printf("maximun size of array is ");
    scanf("%d",&max);
    for(p=0;p<=max;p++)
        {scanf("%d",&a[p]);}
        for(p=0;p<=max;p++)
            {printf("a[%d]=%d\n",p,a[p]);}
      if(max<0)
        printf("split is impossible");
        for(i=0;i<=max;i++)
          {
            if(a[i]%3==0)
                {k=k+1;
                  c[k]=a[i];
                  printf("%d\n",c[k]);}
            else if(a[i]%3!=0)
                {
                    j=j+1;
                  b[j]=a[i];
                  printf("%d\n",b[j]);}
            }

}
