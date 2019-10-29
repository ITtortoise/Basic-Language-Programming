#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
complex()
{};
complex(int k)
{ a=k;b=0;}
 void display()
        {
            cout<<"a="<<a<<"b="<<b<<endl;
        }
};
int main()
{ complex c1;
int  x=5;
c1=x;
c1.display();
}
