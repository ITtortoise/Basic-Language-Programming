#include<bits/stdc++.h>
using namespace std;
vector<int>_list[50],node;
stack<int>_stack;
int e,n,u,v,i,j,s,st,t=0,d[50],f[50];
char c[100];
int vis[100];
void DFS()
{
    _stack.push(s);
    vis[s]=1;
    while(!_stack.empty())
    {
        u=_stack.top();
        //cout<<u;
        node.push_back(u);
        _stack.pop();

        for(i=0; i<_list[u].size(); i++)
        {
            v=_list[u][i];
            if(!vis[v])
            {
                vis[v]=1;
                _stack.push(v);
            }
        }

    }
}
int main()
{
    cin>>n>>e;
    for(i=0; i<e; i++)
    {
        cin>>u>>v;
        _list[u].push_back(v);
        _list[v].push_back(u);
    }
    DFS();
    for(i=0;i<node.size();i++)
        cout<<node[i]<<' ';
}
