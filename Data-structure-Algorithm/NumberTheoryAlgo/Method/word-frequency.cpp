#include<bits/stdc++.h>
#include<vector>
#include<map>
#define sf scanf
#define pf printf
#define sz 123456
typedef long long LL;
using namespace std;

int main()
{
    LL n,i,j,c=0;
    string s1,s2;
    map<string,int>mp;
    getline(cin,s1);
    for(i=0;i<s1.size();i++){
        while(isspace(s1[i]) && s1[i]) i++; /// To avoid white space & generate word ///
        for(j=i;!isspace(s1[j]) && s1[j];j++)
            s2+=s1[j];       /// s2[k]=s1[j] won't work ///
        mp[s2]++;
        s2="";  /// to do null s2 ///
        i=j;
    }
    for(auto i:mp)
        cout<<i.first<<' '<<i.second<<endl;

  return 0;
}
