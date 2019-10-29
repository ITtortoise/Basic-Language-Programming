#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of the three numbers\n ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("first number is the largest value ");
            else
              printf("third number  is the largest number ");

    }
        else if(b>a)
        {
            if(b>c)
            printf("second number is the largest number");
            else
                printf("third number is the largest number");

        }
}
