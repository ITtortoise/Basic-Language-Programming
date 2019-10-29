#include<iostream>
using namespace std;
class ccomplex
{
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<a<<" "<<b;
    }
};
int main()
{
    ccomplex c1;
    c1.setdata(3,4);
    c1.showdata();
}
