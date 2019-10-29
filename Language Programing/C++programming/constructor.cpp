/*constructor*/
#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    complex()//default constractor
    {cout<<"hello constractor"<<endl;}
   // complex(int x)
       // {a=x;}
   complex(int x,int y)//parameterized constructor
        {a=x;b=y;}
       void display()
        {
            cout<<a<<" "<<b<<endl;
        }
};
int main()
{
    complex c1,c2(2,3);//initialize at diclaration time(aim of constractor)
    c2.display();
}