#include<stdio.h>
int main()
{

    int T,n,rem,rev=0,m,sum=0,s=0,c=1;
    scanf("%d",&T);
     while(T--!=0)
       {
        scanf("%d",&n);
        m=n;
         e:
         while(m!=0)
         {  c++;
             rem=m%10;
             rev=(rev*10)+rem;
             m=m/10;
         }

        if(m!=rev)
            {
                m=rev;
        goto e;}

        else if(m==rev)
            printf("%d %d",c,rev);}
        return 0;



}
