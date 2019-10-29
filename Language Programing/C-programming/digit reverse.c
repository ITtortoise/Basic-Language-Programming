#include<stdio.h>
int main()
{
    int n,rem,rev=0,sum=0;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        sum=sum+rem;
        n=n/10;


    }

        printf("reverse number is %d\n",rev);
        //printf("summstion each number is %d",sum);
}
