#include<iostream>
#include<map>
using namespace std;

int main()
{
    int number,i;
    string name;
    map<string,int> phone;
    for(i=0; i<3; i++)
    {
        cin>>name>>number;
        phone[name]=number;
    }
    map<string,int>::iterator it=phone.begin();

    while(it!=phone.end())
    {
        cout<<it->first<<" "<<it->second<<" ";
        it++;
    }
    cout<<endl;

    cout<<phone.size()<<endl;

    return 0;
}
