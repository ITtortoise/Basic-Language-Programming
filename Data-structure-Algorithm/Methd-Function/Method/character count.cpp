#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define sz 10000
typedef long long LL;
using namespace std;
int main()
{
    LL n,i,j,a[sz],amt[sz],k;
    sc("%lld",&n);
    for(i=0; i<n; i++)
    {
        sc("%lld",&a[i]);
        amt[a[i]]++;
    }
    for(i=0; i<n; i++)
    {
        k=0;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
                break;
            else
                k++;
        }
        if(k==(n-(i+1)))
            pf("%lld %lld\n",a[i],amt[a[i]]);
    }


}
