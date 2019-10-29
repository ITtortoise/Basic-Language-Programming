#include<iostream>
using namespace std;
int add(int x,int y);
using namespace std;
int main()
{
    int a=6,b=7,m;
    m=add(a,b);
    cout<<m;

}
int add(int x,int y)
{
    int r;
    r=x+y;
    return (r);
}
