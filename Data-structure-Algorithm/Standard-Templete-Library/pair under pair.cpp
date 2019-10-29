#include<bits/stdc++.h>

using namespace std;

int main()
{

    vector<pair < pair<int,string>, pair<int,string> > >v;
    int  p11,p21,i;
    string p12,p22;
    for(int i=0; i<5; i++)
    {
        cin>>p11>>p12>>p21>>p22;

        v.push_back(make_pair(make_pair(p11,p12),make_pair(p21,p22)));
    }
   for(i=0;i<5;i++)
   {cout<<v[i].first.first<<' '<<v[i].first.second<<endl;
   cout<<v[i].second.first<<' '<<v[i].second.second<<endl;}

}
