#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void set_value(int x,int y)
    {
        a=x;b=y;
       }
    void showvalue()
       {cout<<a<<b;}
};

int main()
{
    complex c1;
    c1.set_value(3,4);
    c1.showvalue();
}
