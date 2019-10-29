#include<stdio.h>
int main()
{
    int n,i,m;
    char s[500];
    printf("enter a word:\n");
    gets(s);
    printf("number of character that you want to extract: ");
    scanf("%d",&m);
    printf("enter beginning index from you want to extract:");
    scanf("%d",&n);
    for(i=n;i<=n+m;i++)
        printf("%c",s[i]);
        //s[i]='\0';
}
