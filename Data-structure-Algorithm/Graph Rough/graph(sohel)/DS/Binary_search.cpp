#include<bits/stdc++.h>
using namespace std;


int bin_search(int *a,int n,int data)
{
    int lo = 0;
    int hi = n-1;

    while(lo <= hi){

        int mid = (lo+hi)/2;

        if(a[mid]==data)
            return mid;
        else if(data > a[mid])
            lo = mid+1;
        else if(data < a[mid])
            hi = mid-1;

    }

}


int main()
{

    int n,a[101];
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    int data;
    cin>>data;

    cout<<bin_search(a,n,data);

    return 0;
}
