#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    getline(cin,s1);
    size_t found=s1.find("student");
    if(found!=string::npos)
        cout<<found<<endl;
    size_t found=s1.find("student",found+1,7);
      cout<<found;

}
