#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define sz 123456
typedef long long LL;
using namespace std;

LL n,a[sz],amt[sz],i,j,c=0,max_index=-1;
int main()
{
    sf("%lld",&n);
    for(i=0; i<n; i++)
    {
        sf("%lld",&a[i]);
        amt[a[i]]++;
        if(a[i]>max_index)
            max_index=a[i];
    }
    for(i=0; i<=max_index; i++)
    {
        if(amt[i]!=0)
            cout<<i<<"->"<<amt[i]<<endl;
    }
}

