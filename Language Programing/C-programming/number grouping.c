#include<stdio.h>
int main()
{
    int a[100],n,i,b=0,c=0,d=0,e=0,f=0,g=0,h=0,j=0,k=0,l=0;
    printf("enter elements number:");
    scanf("%d",&n);
    printf("elements are:");
    for(i=0;i<n;i++)
        {  scanf("%d",&a[i]);}

             for(i=0;i<n;i++)
              {if(a[i]>0 && a[i]<10)
                b++;
              if(a[i]>9 && a[i]<20)
              c++;
              if(a[i]>19 && a[i]<30)
              d++;
              if(a[i]>29 && a[i]<40)
              e++;
               if(a[i]>39 && a[i]<50)
              f++;
              if(a[i]>49 && a[i]<60)
                g++;
              if(a[i]>59 && a[i]<70)
              h++;
              if(a[i]>69 && a[i]<80)
              j++;
              if(a[i]>79 && a[i]<90)
              k++;
               if(a[i]>89 && a[i]<=100)
              l++;}


          printf("number between 00-09 is %d\n",b);
          printf("number between 10-19 is %d\n",c);
          printf("number between 20-29 is %d\n",d);
          printf("number between 30-39 is %d\n",e);
          printf("number between 40-49 is %d\n",f);
          printf("number between 50-59 is %d\n",g);
          printf("number between 60-69 is %d\n",h);
          printf("number between 70-79 is %d\n",j);
          printf("number between 80-89 is %d\n",k);
          printf("number between 90-100 is %d\n",l);


}
