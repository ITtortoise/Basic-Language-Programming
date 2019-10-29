
#include<iostream>
using namespace std;
class person
{
public:
 void flag()
{cout<<"there is no chance to declare, obj. of abstract class"<<endl;}
virtual void fun()=0;//pure virtual fun
};
class student:public person
{
public:
void fun()
{
cout<<"TRY BE A PROGRAMmer"<<endl;}
};
int main()
{
student p1;
p1.fun();
p1.flag();
}

