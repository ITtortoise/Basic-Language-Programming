#include<stdio.h>
int main()
{
    char s[300],k,i,j,n;
    printf("enter a text:\n");
    gets(s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=i+1;j<n;j++)
        {
            if(s[i]=s[j])
                k++;
                        }
                printf("s[i]=%d",i,k);
    }


}
