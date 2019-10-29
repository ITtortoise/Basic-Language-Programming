#include<bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define sz 10000001
#define EPS 1e-9
#define PI acos(-1.0)
#define MOD 1e6 + 3

#define F first
#define S second
#define pb push_back
#define mk make_pair
#define all(x) x.begin(),x.end()

typedef long long ll;
typedef pair<ll,ll> pii;
typedef pair<char,ll> pci;

void Merge(ll a[],ll l,ll m,ll r)
{
    ll i,j,k;
    ll n1 = m-l+1;
    ll n2 = r-m;

    ll L[n1],R[n2];
    for(i=0; i<n1; i++)
        L[i] = a[l+i];
    for(j=0; j<n2; j++)
        R[j] = a[m+1+j];

    i=0, j=0, k=l;

    while( i<n1 && j<n2){

        if(L[i] < R[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<n1){a[k]=L[i]; i++; k++;}
    while(j<n2){a[k]=R[j]; j++; k++;}

}

void MergeSort(ll a[],ll l,ll r)
{
    if(l<r){
        int m = (l+r)/2;
        MergeSort(a,l,m);
        MergeSort(a,m+1,r);

        Merge(a,l,m,r);
    }
}

int main()
{
    ll i,j,k,n;
    cin>>n;
    ll x[n+1];

    for(i=0;i<n;i++)
        cin>>x[i];

    MergeSort(x,0,n-1);

    for(i=0;i<n;i++)
        pf("%d ",x[i]);

    return 0;
}
