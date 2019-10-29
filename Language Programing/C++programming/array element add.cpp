#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,a[200],n,t,v,m;
    cin>>n;
    for(i=0;i<n;i++)
        {cin>>a[i];}
        cin>>t>>v;
        m=n-1;
    for(j=m;j>=t;j--)
        {a[j+1]=a[j];}
        a[t]=v;
    for(i=0;i<n+1;i++)
        cout<<a[i];


}
