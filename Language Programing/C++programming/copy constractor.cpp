
#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    complex(int x,int y)//parameterized constractor
{a=x;b=y;}
   complex(const complex  &c3)//copy constractor
        {
a=c3.a;
b=c3.b;}
  void display()
        {
            cout<<"a="<<a<<"b="<<b<<endl;
        }
};
int main()
{
    complex c1(2,3);
c1.display();
   complex c2(c1);
c2.display();}