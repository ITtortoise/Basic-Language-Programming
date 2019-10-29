/**************************************************
* BISMILLAHIR RAHMANIR RAHIM
* Author Name  : SHOHAG (ICT'13)
* University   : ICT, MBSTU
 ***************************************************/
#include<bits/stdc++.h>
#define  pi    acos(-1.0)
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
#define MAX 100005
#define MIN -1
#define INF 1000000000
#define dbg cout<<"Executed"<<endl;
#define SET(array_name,value) memset(array_name,value,sizeof(array_name))
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll n,i,j,L,m,k,t,sum,cnt,d,rem,mod,u,v,v2,r,l,row,extra,mx,mn,a,b,c,ab,ac,abc,bc,x,y;

vector<ll>G[51];
int level[MAX],vis[MAX];

/************************************ Code Start Here ******************************************************/
int dfs(int u)
{
    vis[u]=1;
    for(auto v:G[u])
     {
        if(!vis[v])
        {
            vis[v]=1;
            level[v]=level[u]+1;
            dfs(v);
        }
    }

}

int main()
{

    cin>>n;
    for(i=1; i<n; i++)
    {
        cin>>x>>y;
        G[x].pb(y);
        G[y].pb(x);

    }

    dfs(1);
    for(i=1; i<=n; i++)
        cout<<level[i]<<endl;

}

