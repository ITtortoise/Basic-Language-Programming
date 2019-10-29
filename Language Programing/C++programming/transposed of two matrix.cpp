#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3],b[3][3],i,j,k,m,n;
     cout<<"Enter row and col num:";
    cin>>m>>n;
     cout<<"enter elements of matrix:";
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             cin>>a[i][j];
         }
     }
      for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             b[i][j]=a[j][i];
         }
     }
     cout<<"Transposed of  matrix is:"<<endl;
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             cout<<b[i][j]<<" ";
         }
         cout<<endl;
     }
}
