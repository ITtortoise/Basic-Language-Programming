#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l=0,i,coun=0,k;
    getline(cin,s);
    l=s.length();
    //cout<<l;
    for(i=1;i<l-1;i=i+3)
    {     k=0;
        for(int j=i+3;j<l-1;j=j+3)
        {
            if(s[i]==s[j])
            {
                k++;
            }
        }
        if(k==0)
            coun++;
    }
    cout<<coun<<endl;

}
