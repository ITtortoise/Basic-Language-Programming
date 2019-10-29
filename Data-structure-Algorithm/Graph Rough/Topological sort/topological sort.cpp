#include<bits/stdc++.h>
using namespace std;
vector<int>_list[100],node;
queue<int>_queue;
map<int,int>indegree;
map<int,int>::iterator it;
int e,n,s,i,j,k,u,v;
void TOPsort()
{
    while(!_queue.empty())
    {
        u=_queue.front();
        node.push_back(u);
        _queue.pop();
        for(i=0;i<_list[u].size();i++)
        {
            v=_list[u][i];
            indegree[v]--;
            //cout<<indegree[v];
            if(indegree[v]==0)
                _queue.push(v);

        }

    }
}
int main()
{
    cout<<"enter number of nodes and edges:";
    cin>>n>>e;
    cout<<"enter each nodes value:";
    for(i=0; i<e; i++)
    {
        cin>>u>>v;
        _list[u].push_back(v);
        indegree[v]++;
    }
    for(i=1; i<=n; i++)
    {
        if(indegree[i]==0)
            _queue.push(i);
    }

   TOPsort();
   for(i=0;i<n;i++)
    cout<<node[i]<<' ';


}
