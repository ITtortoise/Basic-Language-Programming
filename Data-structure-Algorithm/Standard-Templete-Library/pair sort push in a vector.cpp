#include<bits/stdc++.h>
#define    sf    scanf
#define    pf    printf
#define    pi    acos(-1.0)
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    f     first
#define    s     second
#define   all(x) x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,s,s2,c,x,r,res,mod,a[sz],MX,w[sz],p[sz];
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>w[i]>>p[i];

    }
    for (int i=0; i<n; i++)
        v.pb(mp(w[i],p[i]));
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
        cout<<v[i].f<<" "<<v[i].s<<endl;

    return 0;
}

