#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define printf
#define sz 12345
typedef long long LL;
using namespace std;

int main()
{
    LL n,k,i=0,j=0,p[sz],c=0,t;
    sf("%lld",&n); t=n;
    n=fabs(n);
    for(i=2;i*i<=n;i++){
        if(n%i==0){
                c=0;
            while(n%i==0){
                n=n/i;
                c++;
            }
            while(c--){
                p[j]=i;
                j++;
            }
        }
    }
    if(n!=1) {p[j]=n;j++;}
    cout<<t<<" = ";
    for(i=0;i<j;i++){
        cout<<p[i];
        if(i+1!=j) cout<<" x ";
    }
    cout<<endl;

    return 0;
}
