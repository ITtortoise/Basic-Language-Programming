#include<iostream>
#include<list>
using namespace std;

int main()
{
    int i,x;
    list <int> l1,l2;
    for(i=0;i<3;i++){
        cin>>x;
        l1.push_back(x);
    }
    for(i=0;i<3;i++){
        cin>>x;
        l2.push_back(x);
    }
    l1.merge(l2);
    list<int>::iterator it=l1.begin();
    while(it!=l1.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    l1.sort();

    it=l1.begin();
    while(it!=l1.end()){
        cout<<*it<<" ";
        it++;
    }

    return 0;
}
