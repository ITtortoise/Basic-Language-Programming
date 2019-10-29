#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setvalue(int x,int y)
    {
        a=x;b=y;
    }
    void display()
    {
        cout<<a<<" "<<b;
    }
    complex operator+(const complex &c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b= b+c.b;
        return (temp);
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setvalue(3,9);
    c2.setvalue(4,7);
    c3=c1+c2;
    c3.display();
}
