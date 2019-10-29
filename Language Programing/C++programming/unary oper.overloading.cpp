#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
   int setvalue(int x,int y)
   {
       a=x;b=y;
   }
   void display()
   { cout<<a<<" "<<b;}
   complex operator-()
   {   complex temp;
      temp.a=-a;
      temp.b=-b;
      return (temp);
   }
};
int main()
{
    complex c1,c2;
    c1.setvalue(2,4);
    c2=-c1;
    c2.display();
}
