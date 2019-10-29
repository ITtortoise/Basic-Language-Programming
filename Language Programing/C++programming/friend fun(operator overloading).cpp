#include<iostream>
using namespace std;
class complex
{
private:
int  a,b;
public:
void setdata(int  x,int y)
{ a=x;b=y;}
void display()
{cout<<"a="<<a<<"b="<<b;}
friend complex operator+(complex ,complex);
};
complex operator+(complex c4,complex c5)
{
complex  c ;
  c.a=c4.a+c5.a;
  c.b=c4.b+c5.b;
return(c);}
int main()
{   complex c1,c2,c3;
    c1.setdata(4,9);
    c2.setdata(6,10);
    c3=operator+(c1,c2);
    c3.display();
}     

