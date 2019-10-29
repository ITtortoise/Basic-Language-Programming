#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i,j,m=0,l=0;
    gets(s1);
    l=strlen(s1);
    for(i=0; i<l; i++)
    {
        s2[m]=s1[i];
        {
            if(s1[i]=='o'||s1[i]=='O')
                s2[m]='0';

            else if(s1[i]=='0')
            {
                   s2[m]='o';
                if(s1[0]=='0')
                    s2[m]='O';
            }
        }
        m++;
    }
    s2[m]='\0';
    puts(s2);

}
