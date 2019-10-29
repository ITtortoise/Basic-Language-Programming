#include<bits/stdc++.h>
using namespace std;

vector<int> _list[100],node;
queue<int>_queue;
int n,e,u,v,i,j,k,s,p,d,status[100],level[100],previous[100];
void BFS(int s)
{
    status[s]=1;
    level[s]=0;
    _queue.push(s);
    while(!_queue.empty())
    {
        u=_queue.front();
        _queue.pop();
        for(i=0; i<_list[u].size(); i++)
        {
            v=_list[u][i];
            if(!status[v])
            {
                status[v]=1;
                level[v]=level[u]+1;
                _queue.push(v);
                previous[v]=u;
            }
        }
    }


}
void path(int d)
{
    if(d==s)
        return ;
    else
    {
        path(previous[d]);
        cout<<previous[d]<<' ';

    }
}

int main()
{

    cout<<"enter number of edges and nodes :";
    cin>>e>>n;
    cout<<"enter the nodes of each edges: ";
    for(i=0; i<e; i++)
    {
        cin>>u>>v;
        _list[u].push_back(v);
        _list[v].push_back(u);

    }

    cout<<"enter source node and destination:";
    cin>>s>>d;
    BFS(s);
    cout<<"cost :"<<level[d]<<endl<<"path :";
    path(d);
    cout<<d;



}
