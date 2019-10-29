#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x,i,n;
    vector <int> v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=0; i<v.size(); i++)
        cout<<v[i]<<" ";

    cout<<v.size()<<endl;

    v.pop_back();

    for(i=0; i<v.size(); i++)
        cout<<v[i]<<" ";

    cout<<v.size()<<endl;

    return 0;
}
