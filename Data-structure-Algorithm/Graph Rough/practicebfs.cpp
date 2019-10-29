#include<bits/stdc++.h>
using namespace std;

int n,m,i,j,k,u,v,x,y,s,vis[1000],dis[1000];
vector<int>G[100];
vector<int>vec;
queue<int>Q;

int BFS(int s)
{
    vis[s]=1;
    dis[s]=0;
    Q.push(s);
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        for(auto v:G[u])
        {
            if(!vis[v])
            {
                vis[v]=1;
                dis[v]=dis[u]+1;
                Q.push(v);
            }
        }
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
    BFS(1);
    for(i=1; i<=n; i++)
        cout<<dis[i]<<' ';


}
