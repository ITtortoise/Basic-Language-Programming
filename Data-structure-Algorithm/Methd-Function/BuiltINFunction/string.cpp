#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int i,j,k=-1;
    cin>>s;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[0]=='0')
        {
            s[i]='O';
            s1[k]=s[i];
        }
        if(s[i]=='0')
        {
            k++;
            s[i]='o';
            s1[k]=s[i];

        }
        if(s[i]=='O'||s[i]=='o')
        {
            k++;
            s[i]='0';
            s1[k]=s[i];

        }
        if(s[i]!='0'&&s[i]!='o'&&s[i]=='O')
        {
            k++;
            s1[k]=s[i];

        }

    }

    cout<<s1[0];
    cout<<s1[1];
    cout<<s1[2];


}
