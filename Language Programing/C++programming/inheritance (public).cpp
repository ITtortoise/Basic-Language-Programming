#include <iostream>
using namespace std;
class car
{
 public:
int gear;
int  shiftgear(int g)
{   gear=g;
     if(gear<5)
     gear++;}
   };
class  sportscar:public car
{
public:
void display()
{
cout<<"gear is now "<<gear;
}
};
int  main()
{   sportscar s1;
  s1.shiftgear(3);
  s1.display();
}