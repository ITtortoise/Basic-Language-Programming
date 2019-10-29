#include<stdio.h>
int main()
{
    int n,rem,rev=0,m;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;


    }

      if(rev==m)
      printf(" number is a palindron number");
      else
        printf("number is not a palindrom number ");
}
