#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n, k, l, c, d, p, nl, np,a[100];
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a[0]=(k*l)/nl;
    //cout<<a[0]<<endl;
    a[1]=(c*d);
    //cout<<a[1]<<endl;
    a[2]=(p/np);
    //cout<<a[2]<<endl;
    sort(a,a+3);
    cout<<a[0]/n;
}
