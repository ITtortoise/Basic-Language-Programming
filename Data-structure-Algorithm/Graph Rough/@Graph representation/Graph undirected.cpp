#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e,u,v,i,j,k;
    vector<int> arr[10];
    cout<<"Enter the number of edges and nodes :";
    cin>>e>>n;
    cout<<"enter the value of 1st and 2nd nodes of each edge :";
    for(i=1;i<=e;i++)
    {
        cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    for(j=0;j<arr.size();j++)
    {
        cout<<j<<": ";
        for(k=0;k<arr[j].size();k++)
            cout<<arr[j][k]<<' ';
        cout<<endl;
    }
}
