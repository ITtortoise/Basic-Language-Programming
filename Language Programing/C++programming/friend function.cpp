#include<iostream>
using namespace std;
class complex
{
private:
int  a,b;
public:
void setdata(int  x,int y)
{ a=x;b=y;}
friend void fun(complex);
};
void fun(complex c)
{ cout<<"sum:"<<c.a+c.b;}
int main()
{   complex c1;
    c1.setdata(4,9);
    fun(c1);
    
}     
