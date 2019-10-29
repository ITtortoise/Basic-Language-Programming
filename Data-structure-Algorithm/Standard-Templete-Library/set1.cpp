/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()

using namespace std;
int n,m,k,i,j,t,f,t1,t2,t3,t4,t5,r,u,l,c,sum=0,cnt=0,x,y,a[sz],b[sz],g,z,rem,mod,mx,mn;
string s,s1,s2,s3,s4;
map<ll,ll>M;
map<ll,ll>::iterator it1;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<string>v4[51];
vector<ll>::iterator it2;
//pair<ll,ll>p1,p2;
list<ll>l1,l2;
list<ll>::iterator it3;
set<string> st,st1,st2,st3;
set<string>::iterator it4;

int main()
{
    for(i=0;i<2;i++)
    {
        cin>>s1;
        st.insert(s1);
    }
    /*for(it4=st.begin();it4!=st.end();it4++)
      cout<<*it4<<endl;*/
    /*it4=st.find(4);
       //cout<<it4<<endl;   st.erase(it4);
    for(it4=st.begin();it4!=st.end();it4++)
      cout<<*it4<<endl;*/
    /*for(i=1; i<=3; i++)
    {
        cin>>u>>s1;
        v4[u].pb(s1);
    }
    for(u=1; u<=3; u++)
    {
        cout<<u<<" ";
        for(j=0; j<v4[u].size(); j++)
            cout<<v4[u][j];
        cout<<endl;
    }*/

    pair<set<string>::iterator,bool>p1;
    p1=st.insert("shohag");
    if(p1.second==false)
        cout<<"can't insert";
    else
        cout<<"data inseted";
    return 0;
}


