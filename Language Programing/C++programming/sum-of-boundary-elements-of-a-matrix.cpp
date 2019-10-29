#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3],i,j,k,sum=0;

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
             if(i==0||i==2||j==0||j==2)
               sum=sum+a[i][j];
         }
     }cout<<sum;
}
