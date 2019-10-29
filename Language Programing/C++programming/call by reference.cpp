#include<iostream>
int call_by_reference(int &a,int &b);
using namespace std;
int main()
{
    int x,y,r;
    cin>>x>>y;
    r=call_by_reference(x,y);
    cout<<r;
}
int call_by_reference(int &a,int &b)
{  int s;
    s=a+b;
    return (s);
}




