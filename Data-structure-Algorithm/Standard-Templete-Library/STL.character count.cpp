#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define sz 10000
typedef long long LL;
using namespace std;
int main()
{
    LL n,arr[sz],amt[sz],i,j;
    sc("%lld",&n);
    for(i=0; i<n; i++)
    {
        sc("%lld",&arr[i]);
        amt[arr[i]]++;
    }
    for(i=0; i<n; i++)
        pf("%lld %lld\n",arr[i],amt[arr[i]]);
}
