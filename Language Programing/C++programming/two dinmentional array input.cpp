#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][10],r,c,i,j;
    cin>>r>>c;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"a[i][j]:"<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
