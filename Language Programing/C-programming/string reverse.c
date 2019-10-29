#include<stdio.h>
#include<string.h>
int main()
{
    char s[400],s1[100],k=0;
    int n=0,i;
    gets(s);
    gets(s1);
    n=strlen(s);
    for(i=n-1; i>=0; i--)
    {
        if(s[i]==s1[i])
            k++;
    }
    if(k==n-1)
        printf("YES\n");
    else
        printf("NO\n");



}
