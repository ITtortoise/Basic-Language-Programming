#include<iostream>
float area(int z);
int area(int a,int b);
using namespace std;
int main()
{
    int r;
    cout<<"enter the value of redious of circle:";
    cin>>r;
    float result=area(r);
    cout<<"area is "<<result<<endl;
    int l,b,ans;
    cout<<"enter the value of the length and breath of triangle:";
    cin>>l>>b;
    ans=area(l,b);
    cout<<"area is "<<ans;
}
float area(int z)
{

    return (3.1416*z*z);
}
int area(int a,int b)
{
    return (a*b);
}
