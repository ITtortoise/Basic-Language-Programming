#include<iostream>
using namespace std;
class B;
class A
{
private:
 int  a;
public:
 void setdata(int x)
{ a=x;}
friend void fun(A ,B );
};
class B
{
private:
int  b;
public:
void setdata(int m)
{b=m;}
friend void fun(A ,B );
};
void fun(A obj3,B obj4)
{  cout<<"sum is:"<<obj3.a+obj4.b;}

int main()
{
 A obj1;
B obj2;
obj1.setdata(6);
obj2.setdata(7);
fun(obj1,obj2);}
