#include<stdio.h>
int main()
{
    int num;
    printf("enter a number \n");
    scanf("%d",&num);
    if(num<100)
        printf("the number is less than 100");
    else if(num=100)
        printf("the number is equal to  100");
    else
         printf("the number is greater than 100");

}
