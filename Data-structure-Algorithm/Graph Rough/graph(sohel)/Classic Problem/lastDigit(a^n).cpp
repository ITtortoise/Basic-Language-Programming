#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 100000001
using namespace std;
typedef long long ll;

ll i,j,k,L1,L2,ldoa,re;
string a,n;

ll find_remainder(ll m)        /// 2^4 % 10 == 6  tricks (last_digit)^n % 10
{
    ll r=0;
    for(i=0;i<n.size();i++)
        r=((r*10) + (n[i]-'0'))% m ;
    return r;
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        cin>>a>>n;
        L1=a.size();
        L2=n.size();

        if( n == "0" ){
            cout<<"1"<<endl;
            continue;
        }

        ldoa=a[L1-1]-'0';
        if(ldoa == 0 ) cout<<"0"<<endl;
        else if( ldoa == 1 ) pf("1\n");
        else if( ldoa==2 ){
            re=find_remainder(4);
            if(re==0) pf("6\n");
            else if(re==1) pf("2\n");
            else if(re==2) pf("4\n");
            else pf("8\n");
        }
        else if( ldoa==3 ){
            re=find_remainder(4);
            if(re==0) pf("1\n");
            else if(re==1)pf("3\n");
            else if(re==2) pf("9\n");
            else pf("7\n");
        }
        else if( ldoa==4 ){
            re=find_remainder(2);
            if(re==0) pf("6\n");
            else pf("4\n");
        }
        else if( ldoa==5 ) pf("5\n");
        else if( ldoa==6 ) pf("6\n");
        else if( ldoa==7 ){
            re=find_remainder(4);
            if(re==0) pf("1\n");
            else if(re==1) pf("7\n");
            else if(re==2) pf("9\n");
            else pf("3\n");
        }
        else if( ldoa==8 ){
            re=find_remainder(4);
            if(re==0) pf("6\n");
            else if(re==1) pf("8\n");
            else if(re==2) pf("4\n");
            else pf("2\n");
        }
        else if( ldoa == 9 ){
            re=find_remainder(2);
            if(re==0) pf("1\n");
            else pf("9\n");
        }

    }

    return 0;
}
