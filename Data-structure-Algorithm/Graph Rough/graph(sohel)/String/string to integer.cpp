#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size() ;i++)
        n= n*10+ (s[i]-'0');

    cout<<n<<endl;
    return 0;
}
