#include<stdio.h>
int state();
int main()
{
    int i;


    for(i=1;i<=5;i++)
         state();

}
        int state()
        {
            static  num=10;
            num=num+5;
             printf("%d\n",num);
        }
