#include<iostream>
using namespace std;
class car
{
public:
virtual void changegear()
{
cout<<"this is a private car"<<endl;}
};
class sportscar:public car
{
public :
void changegear()
{
cout<<"this is a sports car";}
};
int main()
{car *cp,c;
sportscar s;
cp=&s;
cp->changegear();
}

