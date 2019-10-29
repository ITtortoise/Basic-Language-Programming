
#include<bits/stdc++.h>
#define     sf       scanf
#define     pf       printf
#define     ll       long long
#define     sz       10001
#define     pi       acos(-1.0)
#define     ff       first
#define     ss       second
#define     pb       push_back
#define     all(x)   x.begin(),x.end()

using namespace std;

/*----------------- Start Here -----------------*/

vector<int>_vec[100];
int n,e,i,j,u,v;

int main()
{
    cin>>n>>e;
    for(i=1; i<=e; i++)
    {
        cin>>u>>v;
        _vec[u].pb(v);
        // _vec[v].pb(u);
    }
    for(u=1; u<=n; u++)
    {
        cout<<u<<"-->";
        for(i=0; i<_vec[u].size() ; i++)
        {
            v=_vec[u][i];
            cout<<v<<' ';
        }
        cout<<endl;
    }

    return 0;
}
