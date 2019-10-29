#include<bits/stdc++.h>
using namespace std;
int n,i,j,k,a[1000],l,h,x,mn=1000000;
vector<int>v;
int bs(vector<int>v,int l,int h)
{
    if(l<=h)
    {
        int mid=(l+h)/2;
        if(v[mid]==x)
            return mid;
        else if(v[mid]<x)
            bs(v,mid+1,h);

        else if(v[mid]>x)
        {
            //cout<<a[mid]<<' ';
            mn=min(mid,mn);
            bs(v,l,mid-1);
        }

    }
    else
        return mn;

}
int main()
{

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>k;
        v.push_back(k);
    }
    cin>>x;
    sort(v.begin(),v.end());
    int index=bs(v,0,n-1);
    v.insert(v.begin()+index,x);
    for(i=0;i<v.size();i++)
        cout<<v[i]<<' ';
}
