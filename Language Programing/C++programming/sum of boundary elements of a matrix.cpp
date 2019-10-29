#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3],i,j,k,sum1=0,sum=0,m,n;
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
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             if(i==j)
              sum=sum+a[i][j];
         }
     }
     cout<<"summation of diagonal elements is:"<<sum<<endl;
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             if(i==0||i==m-1||j==0||j==n-1)
               sum1=sum1+a[i][j];
         }
     } cout<<"summation of boundary elements is:"<<sum1;
}
