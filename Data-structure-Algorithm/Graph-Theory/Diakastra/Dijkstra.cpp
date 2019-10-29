#include<bits/stdc++.h>
using namespace std;

int e,n,u,v,s,d,i,j,dis,cost[20][30],Distance[10];

vector<int>_list[100];
queue<int>_queue;

void BFSmodified()
{
    Distance[s]=0;
    _queue.push(s);
    while(!_queue.empty())
    {
        u=_queue.front();
        _queue.pop();
        for(i=0; i<_list[u].size(); i++)
        {
            v=_list[u][i];

            if(Distance[u]+cost[u][v]<Distance[v])
            {
                Distance[v]=Distance[u]+cost[u][v];
                _queue.push(v);
            }
        }
    }
}
int main()
{
    memset(Distance,100,100);
    cout<<"Enter number of nodes and edges:";
    cin>>e>>n;
    cout<<"enter two nodes value and distance:";
    for(i=0; i<e; i++)
    {
        cin>>u>>v;
        _list[u].push_back(v);
        cin>>dis;
        cost[u][v]=dis;
    }
    cout<<"enter source:";
    cin>>s;
    BFSmodified();
    for(i=2; i<=n; i++)
        cout<<Distance[i]<<' ';

}
