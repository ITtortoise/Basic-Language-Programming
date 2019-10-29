#include<stdio.h>
int main()
{
    int y1,m1,d1,y2,m2,d2,dbd,dby,dbm;
    scanf("%d:%d:%d\n%d2:d2:d2",&y1,&m1,&d1,&y2,&m2,&d2);

    {
        if(y1>y2)
    {dby=y1-y2;
       printf("%d:",dby);}
    else
        {dby=y2-y1;
        printf("%d:",dby);}
    }
   {
        if(m1>m2)
            {dbm=m1-m2;
            printf("%d:",dbm);}
    else
        {dbm=m2-m1;
    printf("%d:",dbm);}
   }

   {
        if(d1>d2)
            {dbd=d1-d2;
            printf("%d",dbd);}
    else
        {dbd=d2-d1;
    printf("%d",dbd);}
   }
return 0;


}
