#include<stdio.h>
int main()
{
    int i;
    char s[10000],s1[10000];
    printf("enter a text:\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
       if(s[i]!=' ')
         s1[i]=s[i];
       else
        s1[i]='@';
        puts(s1);
        //getch();
}
