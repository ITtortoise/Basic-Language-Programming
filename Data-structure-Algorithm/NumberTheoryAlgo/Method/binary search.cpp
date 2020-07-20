#include<bits/stdc++.h>
using namespace std;
int n,i,j,k,l,h,a[100],x,t,temp;

int Binarysearch(int a[],int l,int h)
{
    if(h>=l)
    {
        int mid=l+(h-l)/2;

        if(a[mid]==x)
        {
            t=mid;
            temp=t;
            Binarysearch(a,l,mid-1);
        }
        else if(a[mid]>x)
            Binarysearch(a,l,mid-1);
        else if(a[mid]<x)
            Binarysearch(a,mid+1,h);

    }
    else
        return temp;

}


int main()
{

    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];
    sort(a,a+n+1);
    cin>>x;
    cout<<Binarysearch(a,1,n);

}
