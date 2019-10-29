#include<stdio.h>
int main()
{
    int money,hnote,fnote,remoney,tnote,re1money,tennote,re2money,finote,re3money,tonote,re4money,onote;
      scanf("%d",&money);
      {
          hnote=money/100;
      printf("hundread note is %d\n",hnote);}
      if(hnote==0)
        {
            fnote=money/50;
      printf("fifty note is %d\n",fnote);}
      else
        {
            remoney=money-(hnote*100);
            if(remoney==0)
            {
                printf("fifty note is 0\n");
                printf("twenty note is 0\n");
                printf("ten note is 0\n");
               /* printf("five note is 0\n");
                printf("two note is 0\n");
                printf("one note is 0");*/
                goto E;}
      fnote=remoney/50;
      printf("fifty note is %d\n",fnote);}

      if(fnote==0)
      {

          tnote=remoney/20;
          printf("twenty note is %d\n",tnote);
      }
      else
      {
         re1money=money-((hnote*100)+(fnote*50));
      tnote=re1money/20;
      printf("twenty note is %d\n",tnote);}
      if(tnote==0)
      {
           re1money=remoney;
          tennote=re1money/10;
          printf("ten note is %d\n",tennote);
      }
      else
      {
         re2money=money-((hnote*100)+(fnote*50)+(tnote*20));
      tennote=re2money/10;
      printf("ten note is %d\n",tennote);}
        if(tennote==0)
      {
          re2money=re1money;
          finote=re2money/5;
          printf("five note is %d\n",finote);
      }
      else
      {
         re3money=money-((hnote*100)+(fnote*50)+(tnote*20)+(tennote*10));
      finote=re3money/5;
      printf("five note is %d\n",finote);}

     /*  if(finote==0)
      {
          re3money=re2money;
          tonote=re3money/2;
          printf("two note is %d\n",tonote);
      }
      else
      {
         re4money=money-((hnote*100)+(fnote*50)+(tnote*20)+(tennote*10)+(finote*5));
      tonote=re4money/2;
      printf("two note is %d\n",tonote);}
      onote=money-((hnote*100)+(fnote*50)+(tnote*20)+(tennote*10)+(finote*5)+(tonote*2));
      printf("one note is %d",onote);*/

      E:
          return 0;

}
