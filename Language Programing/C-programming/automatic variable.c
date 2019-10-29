#include<stdio.h>
int transfer1(int );
int trsndfer2(int );
int transfer3(int );
int main()
{
    int m;
    m=1000;
    transfer1(m);
    printf(" value is %d",m);

}
    int transfer1(int m)
    {
        int m=100;
        transfer2(int m);
        printf(" value is %d",m);
    }
    int transfer2(int m)
    {
        int m=10;
        printf("value is %d",m);
    }


