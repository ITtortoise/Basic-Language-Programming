#include<iostream>
using namespace std;
  class car
{
 public:
int  gear;
void setgear(int hig,int log)
{cout<<"gear difference:"<<hig-log;}
void changegear()
{cout<<"∆∆∆∆∆"<<endl;}
};
class sportscar:public car
{
public:
void setgear(int g)
{cout<<"execute this statement"<<endl;}
};

int main()
{
sportscar s;
s.changegear();
s.setgear(7);
//s.setgear(7,2); not possible but possible in java ,it is called function overloading in java
}
