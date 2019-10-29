#include<bits/stdc++.h>
using namespace std;
vector<int>vec[100];
int vis[10000],dis[1000],col[100];
queue<int>que;
int x,y,m,n,i,j,k,u;

bool BFS(int s)
{
    vis[s]=1;
    col[s]=1;
    que.push(s);
    while(!que.empty())
    {
        u=que.front();
        que.pop();
        for(auto v:vec[u])
        {
            if(!vis[v])
            {
                vis[v]=1;

                if(col[u]==1)
                    col[v]=2;
                else
                    col[v]=1;
                que.push(v);

            }
            if(col[v]==col[u])
                return false;
        }
    }
    return true;

}

int main()
{
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>x>>y;
        vec[x].push_back(y);
        vec[y].push_back(x);

    }
    if(BFS(1)==true)
       cout<<"bicolourable"<<endl;
    else
        cout<<"not bicolourable"<<endl;


}
