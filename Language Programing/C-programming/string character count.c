#include<stdio.h>
int main()
{
    char str[100];
    int i,j,count,c,k;
    gets(str);
           for(i=0;str[i]!='\0';i++)
            {
                            {if(str[i]==' ')
                                    i++;}

                        {
                           {
                            c=1;
                            for(k=0;k<i;k++)
                           if(str[k]==str[i])
                            c++;}
                            if(c!=1 )
                             i++;}

                 {
                  count=0;
                  for(j=0;str[j]!='\0';j++)

                    if(str[i]==str[j])
                    count++;
                      printf("%c occurs in %d times\n",str[i],count);}
            }

        return 0;

}
