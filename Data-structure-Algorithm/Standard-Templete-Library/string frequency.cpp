#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 123456
typedef long long LL;
using namespace std;

int main()
{
    LL n,i;string s;
    map<string,int>mp;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s;
        if(mp.find(s)!=mp.end())
            mp[s]++;
        else
            mp[s]=1;

    }
    for (map<string,int>::const_iterator itr=mp.cbegin();itr!=mp.cend();itr++)
    {
        if(itr->second > 1)
            cout<<itr->first << " occurs "<<itr->second<<" times"<<endl;
        else
            cout<<itr->first << " occurs "<<itr->second<<" time"<<endl;
    }


  return 0;
}
