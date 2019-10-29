#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],i,j,k=0,sv;
    cin>>n>>sv;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        {if(a[i]==sv)
            k++;
        }
        if(k>0)
            cout<<"value found"<<endl;
        else
            cout<<"value not found"<<endl;
}
