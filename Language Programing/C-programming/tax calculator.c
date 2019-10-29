#include<stdio.h>
int main()
{

    int salary,taxfive,nsalary,taxten,tax1;
    printf("enter salary:\n");
    scanf("%d",&salary);
    if(salary<=400)
      {
          taxfive=(salary*15)/100;
      nsalary=salary-taxfive;
      printf("salary is %d",nsalary);}
      if(salary>400 && salary<=800)
      {
          tax1=((salary-5000)*10)/100;
          taxten=250+tax1;
          nsalary=salary-taxten;
          printf("salary is %d",nsalary);
      }



}
