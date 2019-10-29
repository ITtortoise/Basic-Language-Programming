#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
        cin>>a;
        int l=strlen(a);
        sort(a,a+l);
         for(int i=0;i<l;i++)
        cout<<a[i]<<"\a";
}


