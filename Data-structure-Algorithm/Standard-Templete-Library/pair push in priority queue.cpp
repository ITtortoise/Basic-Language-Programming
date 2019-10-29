#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    pair<int,int>p;
    vector<pair<int,int> >vec;
    priority_queue<pair<int,int> >prio_queue;
    for(i=0; i<4; i++)
    {
        cin>>n>>m;
        p=make_pair(n,m);
        prio_queue.push(p);
    }
    //sort(vec.begin(),vec.end());
        p=prio_queue.top();
        cout<<p.first<<' '<<p.second<<endl;

}
