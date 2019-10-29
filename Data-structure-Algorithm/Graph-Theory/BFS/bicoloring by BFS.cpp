#include<bits/stdc++.h>
using namespace std;
int n,e,i,j,k,u,v,s;
vector<int>_list[100],node;
queue<int>_queue;
char color[100];


bool Bicolouring()
{
    color[s]='R';
    _queue.push(s);
    while(!_queue.empty())
    {
        u=_queue.front();
        _queue.pop();

        for(i=0; i<_list[u].size(); i++)
        {
            v=_list[u][i];

            if(color[v]=='W')
            {
                if(color[u]=='R')
                    color[v]='B';
                else
                    color[v]='R';

                _queue.push(v);
            }
            else if(color[u]==color[v])
                return false;

        }


    }
                return true;


}
int main()
{
     memset(color,100,'W');
    cout<<"Enter number of Edges and Nodes:";
    cin>>e>>n;
    cout<<"Enter two nodes value for each edge:";
    for(i=0; i<e; i++)
    {
        cin>>u>>v;
        _list[u].push_back(v);
        _list[v].push_back(u);
    }

    cout<<"Enter starting node:";
    cin>>s;
    if(Bicolouring()==true)
        cout<<"bicolouring is possible";
    else
        cout<<"bicolouring not possible";

}
