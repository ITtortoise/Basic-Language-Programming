#include<stdio.h>
int main()
{
    char s[500];
    int n,i,j,k,p;
    printf("enter a text :\n");
    gets(s);
    n=strlen(s);
    for(i=1;i<=n;i++)
       {
        for(j=0;j<i;j++)
        printf("%c",s[j]);
      printf("\n");
}
    for(k=n-1;k>=0;k--)
    {
        for(p=0;p<=k;p++)
            printf("%c",s[p]);
        printf("\n");
    }
}
