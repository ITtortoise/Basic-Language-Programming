#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v1,v2;
    string s1,s2;
    stringstream c1;
    getline(cin,s1);
    v1=atoi(s1.c_str());
    c1<<v1;
    s2=c1.str();
    cout<<v1<<" "<<s2;

}
