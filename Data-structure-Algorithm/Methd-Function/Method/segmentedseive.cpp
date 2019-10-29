#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll i,j,k,sqrtn,checkprime[100000000],a,b,arr[100000000],p;
vector<ll>prime,segprime;

ll seive(ll n)
{

    checkprime[0]=checkprime[1]=1;
    for(i=4; i<=n; i+=2)
        checkprime[i]=1;
    prime.push_back(2);
    sqrtn=sqrt(n);
    for(i=3; i<=sqrtn; i++)
    {
        if(checkprime[i]==0)
        {
            for(k=i*i; k<=n; k+=i*2)
                checkprime[k]=1;
        }
    }
    for(i=3; i<=n; i++)
        if(checkprime[i]==0)
        {
            prime.push_back(i);
            //cout<<i<<' ';
        }

}

int main()
{
    cin>>a>>b;
    ll sqrtb=sqrt(b);
    seive(sqrtb);
    if(a==1)
        a++;
    for(i=0; i<prime.size()&&prime[i]<=sqrtb; i++)
    {
        p=prime[i];
        j=p*p;
        if(j<a)
            j=((a+p-1)/p)*p;//j=a+p-1;

        for(; j<=b; j+=p)
            arr[j-a]=1;

    }
    for ( i=a; i<= b; i++ )

        if ( arr[i-a] == 0 )
        {
            segprime.push_back(i);
            cout<<i<<' ';
        }

}



