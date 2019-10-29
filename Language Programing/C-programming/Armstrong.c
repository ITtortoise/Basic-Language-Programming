#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,b,n,c,sum=0,d,x,s;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        d=a;
        while(a>0)
        {
            int rem=0;
            rem=a%10;
            sum=sum+(rem*rem*rem);
            a=a/10;
        }
        if(sum==d)
            printf("Armstrong\n");
        else

            printf("Not Armstrong\n");
    }

    return 0;
}

