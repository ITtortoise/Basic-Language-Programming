#include<bits/stdc++.h>
using namespace std;
vector<int>_list[100];
pair<int,int>p;
priority_queue<pair<int,int> >pri_queue;
int e,n,s,u,v,i,j,Distance[100],cost[10][10];
void BFSmodified()
{
    Distance[s]=0;
    p=make_pair(Distance[s],s);
    pri_queue.push(p);
    while(!pri_queue.empty())
    {
        p=pri_queue.top();
        u=p.second;
        //cout<<u<<' ';
        pri_queue.pop();
        for(i=0; i<_list[u].size(); i++)
        {
            v=_list[u][i];
            //cout<<Distance[v]<<' ';
            if(Distance[u]+cost[u][v]<Distance[v])
            {
                Distance[v]=Distance[u]+cost[u][v];
                p=make_pair(Distance[v],v);
                pri_queue.push(p);
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
        cin>>cost[u][v];

    }
    cout<<"enter source:";
    cin>>s;
    BFSmodified();
    for(i=2; i<=n; i++)
        cout<<Distance[i]<<' ';
}
