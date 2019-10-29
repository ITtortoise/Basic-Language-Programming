//early binding hobe,j class er obj sei func execute hobe//
#include<iostream>
using namespace std;
  class car
{
 public:
int  gear;
void setgear(int g)
{gear=g;}
   void gearchange()
{ if(gear>3)
gear--;
cout<<"danger∆!decrement your gear";}
void display()
{cout<<gear;}
};
class sportscar:public car
{
public:
void gearchange()
{
  if(gear<10)
gear++;
cout<< "increment your gear to win the race"<<endl;}
};

int main()
{
sportscar s;
s.setgear(7);
s.gearchange();
s.display();
}

 
