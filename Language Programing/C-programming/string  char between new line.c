#include<stdio.h>
int main()
{
    int i;
    char s[10000],s1[10000];
    gets(s);
    for(i=0;s[i]!='\0';i++)
        if(s[i]!=' ')
        s1[i]=s[i];
    else
        s1[i]='\n';
    puts(s1);
}
