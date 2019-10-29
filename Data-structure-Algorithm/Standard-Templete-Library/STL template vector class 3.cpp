#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int x,i,m;
    vector <int> v;
    for(int i=0;i<5;i++){
        cin>>x;
        v.push_back(x);
    }
    vector <int>:: iterator it=v.begin();

    while(it!=v.end()){         // for showing values using iterator //
         cout<<*it<<" ";
         it++;
    }
    cout<<endl;

    cin>>m;
    v.insert(v.begin()+3,m);

    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    cout<<endl<<v.size()<<endl;

    v.erase(v.begin()+3);

    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    cout<<endl<<v.size()<<endl;

    return 0;
}


