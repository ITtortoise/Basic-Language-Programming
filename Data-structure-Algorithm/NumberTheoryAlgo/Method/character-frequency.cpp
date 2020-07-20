#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define sz 123456
typedef long long LL;
using namespace std;

int main()
{
    LL n,i,j,c;
    string s;
    map<char,int>mp;
    getline(cin,s);
    for(i=0;i<s.size();i++)
        mp[s[i]]++;
    for(auto i:mp)
        cout<<i.first<<' '<<i.second<<endl;
    return 0;
}
