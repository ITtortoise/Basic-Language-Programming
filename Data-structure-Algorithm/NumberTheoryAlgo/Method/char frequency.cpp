#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define sz 123456
typedef long long LL;

using namespace std;

LL n,amt[sz],i,j,c,max_index=-1;

int main()
{
    char s[sz];
    gets(s);
    for(i=0; s[i]; i++)
        amt[s[i]]++;

    for(i=0; i<26; i++)
    {
        if(amt[i]!=0)
        {
            pf("%c --->> ",i+97);
            pf("%lld\n",amt[i]);
        }
    }
    return 0;
}

