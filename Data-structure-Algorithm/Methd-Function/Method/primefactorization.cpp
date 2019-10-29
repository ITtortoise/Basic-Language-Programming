#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100000],i,j,k;
    vector<int>v,v1;
    cin>>n;
    memset(a,0,sizeof a);
    a[0]=a[1]=1;
    for(i=4; i<=n; i+=2)
        a[i]=1;
    int sqrn=sqrt(n);
    for(i=3; i<=sqrn; i++)
    {
        if(a[i]==0)
            for(j=i*i; j<=n; j+=i*2)
                a[j]=1;
    }
    v.push_back(2);
    for(i=3; i<=n; i++)
        if(a[i]==0)
            v.push_back(i);


    for(i=0; v[i]<=sqrt(n); i++)
    {
        while(n%v[i]==0)
        {
            n=n/v[i];
            cout<<v[i]<<"x";
            //v1.push_back(i);
        }
    }
    if(n>1)
        cout<<n;

}
