#include<iostream>
int add(int num);
using namespace std;
int main()
{
    int n,r;
    cin>>n;
    r=add(n);
    cout<<r;
}
int add(int num)
{
    int s;
    if(num==0)
        return 0;
    else
    {
        s=num+add(num-1);
        return(s);}
}
