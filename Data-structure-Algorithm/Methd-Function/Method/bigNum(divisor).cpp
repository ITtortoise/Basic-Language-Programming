#include<bits/stdc++.h>
using namespace std;
long long int n,i,k,j,m,t;
bool Isprime[100000009];
vector<long long >prime;
int main()
{
    for(i=2; i<=sqrt(1e6); i++)
    {
        if(Isprime[i])
        {
            for(j=i+i; j<=1e6; j+=i)
                Isprime[j]=1;
        }
        prime.push_back(i);
    }
    cin>>n;
    m=sqrt(n);
    bool flag=false;
    for(i=0; i<=prime.size(); i++)
    {
        if(prime[i]>m)
            break;

            while(n%prime[i]==0)
            {
                n=n/prime[i];
                t=prime[i];
                flag=true;
            }
            if(flag==true)
                cout<<t<<' ';

        flag=false;
    }
   if(n!=1)
    cout<<n<<endl;


    return 0;
}
