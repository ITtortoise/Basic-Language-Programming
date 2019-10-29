 /*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS.."
CREATOR:SHOHAG(ICT'13,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    1e7
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,i,j,L,m,k,t,sum=0,cnt=0;
struct something
{
    int x;
    int r;
    int q;
};
vector<something> v;
int main()
{
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        something s;
        cin >>s.x>>s.r>>s.q;
        v.push_back(s);

    }
    for(i=0;i<v.size();i++)
        cout<<v[i].x<<' '<<v[i].r<<' '<<v[i].q<<endl;

}


