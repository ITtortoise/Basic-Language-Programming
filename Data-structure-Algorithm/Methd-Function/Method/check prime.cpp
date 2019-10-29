#include<bits/stdc++.h>
#define sf scanf
#define pf printf
typedef long long LL;

using namespace std;

LL n,m,x,p,c=0,i,j,flag=0;
bool isPrime(LL x)
{
    if(x<=1)
        return false;
    else if(x==2)
        return true;
    else if(x%2==0)
        return false;
    for(i=2; i*i<=x; i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;

}
int main()
{
    sf("%lld",&n);
    if(isPrime(n)==1) pf("Prime Number\n");
    else pf("Not Prime\n");
    return 0;
}
