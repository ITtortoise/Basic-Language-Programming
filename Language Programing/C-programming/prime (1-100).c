#include<stdio.h>
int main()
{
    int n,i,j,count,rem;
    printf("enter the value of n:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        count=0;
        for(j=2; j<i; j++)
        {
            rem=i%j;
            if(rem==0)
                count++;
        }
        if(count==1)
        {
            printf("%d  ",i);
            if(i*2<=n)
                printf("%d ",i*2);
        }
    }
    return 0;
}
