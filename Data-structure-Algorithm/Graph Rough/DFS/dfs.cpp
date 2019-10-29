#include<bits/stdc++.h>
using namespace std;
int n,e,i,j,k,u,v,s;
vector<int>_list[100],node;
queue<int>_queue;
char color[100];
void dfs(ll u,ll p)   ///call dfs(1,-1)
{
    if(p!=-1)
        par[u]=p;
    for(ll i=0;i<V[u].size();i++)
    {
        ll v=V[u][i];
        if(par[v]==u)
            continue;
        dfs(v,u);
    }
}
