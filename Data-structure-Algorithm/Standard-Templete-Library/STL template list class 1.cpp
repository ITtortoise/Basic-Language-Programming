#include<bits/stdc++.h>
#include<list>
using namespace std;

int main()
{
    int x,i,n;
    list <int> l;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        l.push_back(x);
    }
    /*for(i=0;i<5;i++){
        cout<<l[i]<<" ";   l[i] this is not working for list object,
     };                    for access the element u must use iterator */

    list <int>::iterator it=l.begin();

    while(it!=l.end()){
         cout<<*it<<" ";
         it++;
    }

    return 0;
}
