#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v1,v2,v3,v4,v5,v6,i,j,k;
    string s1,s2,s3,s4,s5,s6,s7;
    stringstream c1,c2;
    getline(cin,s1);
    //getline(cin,s2);
    v1=atoi(s1.c_str());
    //v2=atoi(s2.c_str());
    //v3=v1+v2;
    c1<<v1;
    s3=c1.str();
    cout<<v1<<" "<<s3;
    /*for(int i=0; s3[i]!='\0'; i++)
    {
        if(s3[i]=='0')
            continue;
        else
            s4+=s3[i];
    }
    //cout<<s4<<endl;
    for(int j=0; s1[j]!='\0'; j++)
    {
        if(s1[j]=='0')
            continue;
        else
            s5+=s1[j];
    }
    //cout<<s5<<endl;
    for(int k=0; s2[k]!='\0'; k++)
    {
        if(s2[k]=='0')
            continue;
        else
            s6+=s2[k];
    }
    //cout<<s6<<endl;
    v4=atoi(s5.c_str());
    v5=atoi(s6.c_str());
    v6=v4+v5;
    //cout<<v6<<endl;
    c2<<v6;
    s7=c2.str();
    // cout<<s7<<endl;
    if(s4==s7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;*/

}
