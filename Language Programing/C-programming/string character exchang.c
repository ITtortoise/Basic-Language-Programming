#include<stdio.h>
int main()
{
    char s[20];
    int i;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='0')
        {   if(i==0)
                 s[i]='O';
              else
                s[i]='o';
        }
          else
            if(s[i]=='O'||s[i]=='o')
            s[i]='0';
    }
    s[i]='\0';
    for(i=0;s[i]!='\0';i++)
        printf("%c",s[i]);
}
