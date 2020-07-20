#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 123456
typedef long long LL;
using namespace std;

int main()
{
    LL n,i,j,k,t=1,c=0;
    char s[12345];

    while(gets(s))
    {
        for(i=0; s[i]; i++)
        {
            if(isalpha(s[i]))
            {
                c++;
                for(i=i+1; isalpha(s[i]) ; i++);
            }
        }
        cout<<c<<endl;
        c=0;
    }
    return 0;
}
