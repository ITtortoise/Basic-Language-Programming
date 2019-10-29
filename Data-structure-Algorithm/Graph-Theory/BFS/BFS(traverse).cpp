#include<bits/stdc++.h>
using namespace std;
vector<int> _list[100],node;
queue<int>_queue;
int n,e,u,v,s,i,j,k,status[1000],dis[1000];
void BFS()
{
    status[s]=1;
    dis[s]=0;
    _queue.push(s);
    while(!_queue.empty())
    {
        u=_queue.front();
        _queue.pop();
        node.push_back(u);
        for(i=0;i<_list[u].size();i++)
        {
            v=_list[u][i];
            if(!status[v])
            {
                status[v]=1;
                _queue.push(v);
                dis[v]=dis[u]+1;

            }
        }
    }
}
int main()
{

    cout<<"enter nmber of node and edges:";
    cin>>n>>e;
    cout<<"enter value of each edges:";
    for(i=1;i<=e;i++)
    {
        cin>>u>>v;
        _list[u].push_back(v);
        _list[v].push_back(u);
    }
    cout<<"Enter starting node:";
    cin>>s;
    BFS();
    for(i=0;i<node.size();i++)
        cout<<node[i]<<endl;


}
