#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 9999999
typedef long long LL;
using namespace std;
LL m,n,x,k,p,q,t[sz],i,j;
bool isPrime(LL x)
{
    if(x==2)
        return true;
    else if(x%2==0)
        return false;
    for(i=3; i<=sqrt(n); i+=2)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int main()
{
    sf("%lld",&n);
    t[0]=n-2;
    t[1]=n-3;
    t[2]=n-5;
    t[3]=n-7;
    t[4]=n-11;
    t[5]=n-13;
    t[6]=n-17;
    t[7]=n-19;
    for(j=0; j<8; j++)
        if(isPrime(t[j]))
        {
          cout<<t[j];
            break;
        }

    return 0;
}


