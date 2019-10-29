#include<stdio.h>
int main()
{
    int n,rem,dec=0,i=1;
    printf("enter a binary number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        dec=dec+rem*i;
        n=n/10;
        i=i*2;
    }
    printf("decimal number is %d",dec);
}

