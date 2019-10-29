#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 9999999
typedef long long LL;
using namespace std;

LL n,x,k,t,i=1,j=1,p[sz];

bool isPrime(LL x)
{
    if(x==2)
        return true;
    else if(x%2==0)
        return false;
    for(i=2; i*i<=x; i++)
    {
        if(x%i==0) return false;
    }
    return true;
}

int main()
{
    for(n=2; n<=1000000; n++)
    {
        if(isPrime(n))
        {
            p[j]=n;
            j++;
        }
    }
    sf("%lld",&t);
    while(t--)
    {
        sf("%lld",&k);
        cout<<p[k]<<endl;
    }

    return 0;
}
