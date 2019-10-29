#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],n,i,j,k,e,u,v;
    map<int,int>_map1,_map2;
    map<int,int>::iterator it;
    cout<<"enter number of node and edges:";
    cin>>n>>e;
    cout<<"enter two nodes value of each edge:";
    for(i=0;i<e;i++)
    {
        cin>>u>>v;
        _map1[u]++;
        _map2[v]++;

    }

    for(it=_map1.begin();it!=_map1.end();it++){
        cout<<"outdegree of "<<it->first<<" is :"<<it->second<<endl;
    }
    for(it=_map2.begin();it!=_map2.end();it++){
        cout<<"indegree of "<<it->first<<" is :"<<it->second<<endl;
    }


}
