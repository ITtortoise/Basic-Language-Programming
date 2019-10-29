#include<stdio.h>
int main()
{
     #include<stdio.h>
int main()
{
    int num,n,i,j,count,rem,rem1;
    printf("enter the value of n:");
    scanf("%d",&n);

    for(i=3;i<=n;i++)
    {
        count=0;
        for(j=2;j<i;j++)
        {
                rem=i%j;
               if(rem==0)
               count++;
        }
        if(count==0)
       printf("%d",i);
       /*rem1=n%i;
       if(rem1!=0)
        printf("%d",i);*/
    }


    return 0;
}

}
