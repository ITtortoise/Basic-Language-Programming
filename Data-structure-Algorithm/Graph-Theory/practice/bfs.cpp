#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,v,x,y,s,u,dis[10000],visit[10000];
vector<int> _list[100],node;
queue<int>my_queue;
int BFS(int s)
{
    my_queue.push(s);
    visit[s]=1;
    while(!my_queue.empty())
    {
        v=my_queue.front();
        node.push_back(v);
        my_queue.pop();
        for(i=0; i<_list[v].size(); i++)
        {
            u=_list[v][i];
            if(!visit[u])
            {
                visit[u]=1;
                dis[u]=dis[v]+1;
                my_queue.push(u);
                node.push_back(u);
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
        _list[x].push_back(y);
        _list[y].push_back(x);

    }
    cin>>s;
    BFS(s);
    for(i=0; i<node.size(); i++)
        cout<<node[i]<<' ';
    return 0;

}
