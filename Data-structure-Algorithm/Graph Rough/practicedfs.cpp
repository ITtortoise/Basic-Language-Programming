#include<bits/stdc++.h>
using namespace std;

int n,m,i,j,k,u,v,x,y,s,vis[1000],dis[1000];
vector<int>G[100];
vector<int>vec,node;
queue<int>Q;

int DFS(int s)
{
    vis[s]=1;
    for(auto v:G[s])
    {
        vis[v]=1;
        DFS(v);
    }

}
int main()
{

    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    DFS(1);


}
