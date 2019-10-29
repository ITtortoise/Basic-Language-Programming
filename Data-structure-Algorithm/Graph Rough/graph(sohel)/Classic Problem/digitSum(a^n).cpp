#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;

typedef long long ll;           /// digit_sum of a^n where a>>1 && n>>1

ll i,j,k,s,bs,re;               /// (75)^2= 5625 so digit_sum = (5+6+2+5) = 18 = 1+8 =9
string a,n;                     /// (75)^2 == (7+5)^2 == (12)^2 == (1+2)^2 == 3^2 ==9

ll digit_sum(ll n)
{
    ll bs=0;
    while(n){
        bs+=n%10;
        n/=10;
    }
    if(bs>9) digit_sum(bs);
    else return bs;
}

ll find_remainder(ll m)
{
    ll r=0;
    for(i=0;i<n.size();i++)
        r=((r*10) + (n[i]-'0'))% m ;
    return r;
}

int main()
{
    cin>>a>>n;
    for(i=0;i<a.size();i++)
        s+=a[i]-'0';
    bs=digit_sum(s);

    if(bs==1) pf("1\n");
    else if(bs==2){
        re=find_remainder(6);
        if(re==0) pf("1\n");
        else if(re==1) pf("2\n");
        else if(re==2) pf("4\n");
        else if(re==3) pf("8\n");
        else if(re==4) pf("7\n");
        else pf("5\n");
    }
    else if(bs==3 || bs==6){
        if(n.size()==1 && n[0]=='1') pf("%lld,bs\n");
        else pf("9\n");
    }
    else if(bs==4){
        re=find_remainder(3);
        if(re==0) pf("1\n");
        else if(re==1) pf("4\n");
        else if(re==2) pf("7\n");
    }
    else if(bs==5){
        re=find_remainder(6);
        if(re==0) pf("1\n");
        else if(re==1) pf("5\n");
        else if(re==2) pf("7\n");
        else if(re==3) pf("8\n");
        else if(re==4) pf("4\n");
        else pf("2\n");
    }
    else if(bs==7){
        re=find_remainder(3);
        if(re==0) pf("1\n");
        else if(re==1) pf("7\n");
        else pf("4\n");
    }
    else if(bs==8){
        re=find_remainder(2);
        if(re==0) pf("1\n");
        else pf("8\n");
    }
    else if(bs==9) pf("9\n");

    return 0;

}
