#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;
    gets(s);
    for(i=0;s[i]!='\0';i++)
      {
          if(s[i]=='0')
          {
                s[i]='o';
          }
       if(s[i]=='o' || s[i]=='O')
            {  s[i]='0';
                      }
             s[i]='\0';
        for(i=0;i<5;i++)
      printf("%c",s[i]);}

}
