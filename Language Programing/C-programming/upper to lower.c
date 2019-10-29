#include<stdio.h>
int main()
{
    char upper,lower,ch;
    printf("enter a character :-\n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        upper='A'+ch-'a';
    printf("the upper case character is %c",upper);
                                                   }
    else if (ch>='A'&& ch<='Z')
   {
       lower='a'+ch-'A';
    printf("the lower case character is %c",lower);
                                                   }
    return 0;
}
