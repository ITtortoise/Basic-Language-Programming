#include<stdio.h>
int main()
{
    int num,fact,i,r=1;
    printf("enter the value of num:\n");
    scanf("%d",&num);
    r=num;
      if(num==0)
          {printf("factorial  is 1");
        goto label;}
      for(i=1;i<num;i++)
        {
            r=r*i;

                  }
        printf(" factorial is %d",r);
       label:
       return 0;
}
