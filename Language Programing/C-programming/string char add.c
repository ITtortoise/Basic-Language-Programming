#include<stdio.h>
int main()
{
   int i,j,k;
   char s1[1000],s2[1000],s3[1000],s[5000];
   printf("enter employes name :\n");
   printf("enter employes first name :\n");
   gets(s1);
   printf("enteradmployes second name:\n");
   gets(s2);
   printf("enter employes last name\n");
   gets(s3);
   for(i=0;s1[i]!='\0';i++)
       s[i]=s1[i];
       s[i]=' ';
     for(j=0;s2[j]!='\0';j++)
        s[i+j+1]=s2[j];
     s[i+j+1]=' ';
      for(k=0;s3[k]!='\0';k++)
        s[i+j+k+2]=s3[k];
     printf("after adding the employes name:\n");
     puts(s);

}
