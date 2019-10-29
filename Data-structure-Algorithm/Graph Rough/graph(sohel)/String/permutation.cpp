 #include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>v;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    do{
        v.push_back(s);
    }
    while(next_permutation(s.begin(),s.end()));

    for(auto i:v) cout<<i<<endl;
}
