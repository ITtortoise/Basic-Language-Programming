#include<stdio.h>
int main()
{
    int n,rem,bin=0,i=1,r=0,s=0;
    //printf("enter a decimal number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%2;
        bin=bin+rem*i;
        n=n/2;
        i=i*10;
    }
    printf("binary number is %d\n",bin);

}
