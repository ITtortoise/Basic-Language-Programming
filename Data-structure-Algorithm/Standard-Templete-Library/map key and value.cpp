#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,k,l,c=0,p,q,amt[sz];
    string s1,s2="";
    cin>>n;
    getchar();
    map<string,int>mp;
    for(i=0; i<n; i++)
    {
        getline(cin,s1);
        for(j=0; isspace(s1[j]); j++) {}
        for(k=j; s1[k]!=' '; k++)
        {
            s2+=s1[k];
        }
        mp[s2]++;
        s2="";
    }
    for(auto i:mp)
        cout<<i.first<<" "<<i.second<<endl;

    return 0;

}
