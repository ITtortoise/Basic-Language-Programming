#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3],i,j,k,m,n,sum=0,sum1=0;
    cout<<"Enter row and col num:";
    cin>>m>>n;
     cout<<"enter elements of 1st matrix:";
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             cin>>a[i][j];
         }
     }
     cout<<"enter elements of 2nd matrix:";
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             cin>>b[i][j];
         }
     }
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             c[i][j]=a[i][j]-b[i][j];
         }
     }
     cout<<"Substraction of two matrix is:"<<endl;
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             cout<<c[i][j]<<" ";
         }
         cout<<endl;
     }
}
