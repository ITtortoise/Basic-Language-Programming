#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum,m,n;
     cout<<"Enter row and col num:";
    cin>>m>>n;
     cout<<"enter elements of 1st matrix:";
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter elements of 2nd matrix:";
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0; i<m; i++)
    {

        for(j=0; j<n; j++)
        {   sum=0;
            for(k=0; k<n; k++)
            {
                sum=sum+a[i][k]/b[k][j];
                c[i][j]=sum;
            }
        }
    }
    cout<<"Divition of two matrix is:"<<endl;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}

