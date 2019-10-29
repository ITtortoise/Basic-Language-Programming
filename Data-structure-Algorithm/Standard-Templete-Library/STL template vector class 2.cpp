#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v1,v2,v3(6);
    int i,x;
    for(i=0;i<3;i++){
        cin>>x;
        v1.push_back(x);
    }
    for(i=0;i<3;i++){
        cin>>x;
        v2.push_back(x);
    }
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    vector<int>::iterator it=v3.begin();
    while(it!=v3.end()){         // for showing values using iterator //
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    sort(v3.begin(),v3.end());
    it=v3.begin();

    while(it!=v3.end()){        // for showing values using iterator //
        cout<<*it<<" ";
        it++;
    }
    return 0;
}

