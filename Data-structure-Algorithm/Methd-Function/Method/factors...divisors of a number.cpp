#include<bits/stdc++.h>
#define sf scanf
#define pf printf
typedef long long LL;
using namespace std;
LL n,i,j,k;
int main()
{
    map<int,int>mp;
    sf("%lld",&n);
    for(i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            mp[i]=1;
            mp[n/i]=1;
        }
    }
    for(auto i:mp)
        cout<<i.first<<endl;

    return 0;
}

