#include<bits/stdc++.h>
using namespace std;
vector<int>_list[50],node;
int e,n,u,v,i,j,s,st,t=0,d[50],f[50],vis[1000];
char c[100];
void DFS(int st)
{
    u=st;
    t=t+1;
    d[u]=t;
    c[u]='G';
    cout<<"discover :"<<u<<' '<<d[u]<<' '<<c[u]<<endl;
    for(i=0; i<_list[u].size(); i++)
    {
        v=_list[u][i];
        if(c[v]=='W')
            DFS(v);
    }
    c[u]='B';
    t=t+1;
    f[u]=t;
    cout<<endl<<"finish :"<<u<<' '<<f[u]<<' '<<c[u]<<endl;
}
int main()
{
    memset(c,'W',sizeof(c));
    cin>>n>>e;
    for(i=0;i<e; i++){
        cin>>u>>v;
        _list[u].push_back(v);
    }
    for(i=1; i<=n; i++)
    {
        if(!vis[i])
            DFS(i);
    }
    for(i=0;i<node.size();i++)
        cout<<node[i]<<' ';
    /*for(i=1;i<=n;i++)
        cout<<"discovery time :"<<d[i]<<"finshing time :"<<f[i]<<endl;*/
}
