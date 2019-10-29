#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,E,u,v,i,j,k;
    vector <int > alist[10];
    cout<<"Enter number of Nodes and Edges:";
    cin>>N>>E;
    cout<<"Enter the 1st and 2nd nodes of each edge:";
    for(i=0;i<E;i++)
    {
        cin>>u>>v;
        alist[u].push_back(v);
    }
    for(j=1;j<=N;j++)
    {
        cout<<"adjacent node of "<<j<<" are :";
         for(k=0;k<alist[j].size();k++)
            cout<<alist[j][k]<<' ';
         cout<<endl;
    }

}
