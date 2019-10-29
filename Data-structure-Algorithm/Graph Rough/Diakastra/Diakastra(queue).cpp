#include<bits/stdc++.h>
using namespace std;

int e,n,u,v,s,d,i,j,dis,distance[100],cost[20][30];
vector<int>_list[100];
priority_queue<int>_queue;

void BFSmodified()
{
    distance[s]=0;
    _queue.push(s);
    while(!_queue.empty())
    {
      u=_queue.front();
      _queue.pop();
      for(i=0;i<_list[u].size();i++)
      {
          v=_list[u][i];
          if(distance[u]+cost[u][v]<distance[v])
              distance[v]=distance[u]+cost[u][v];
      }
    }
}
int main()
{

    cout<<"Enter number of nodes and edges:";
    cin>>e>>n;
    cout<<"enter two nodes value and distance between them for each edge:";
    for(i=0; i<e; i++)
    {
        cin>>u>>v;
        _list[u].push_back(v);
        _list[v].push_back(u);
        cin>>dis;
        cost[u][v]=dis;
    }
    cout<<"enter source:";
        cin>>s;
    BFSmodified();
      for(i=0;i<n;i++)
      cout<<distance[i]<<' ';

}
