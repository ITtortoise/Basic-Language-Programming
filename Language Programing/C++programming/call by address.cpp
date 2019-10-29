#include<iostream>
int call_by_address(int *a,int *b);
using namespace std;
int main()
{
    int x,y,r;
    cin>>x>>y;
    r=call_by_address(&x,&y);
    cout<<r;
}
int call_by_address(int *a,int *b)
{  int s;
    s=*a+*b;
    return (s);
}



