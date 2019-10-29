#include<iostream>
using namespace std;
class array;
{
private:
int  a[10];
public:
void insert(index,value)
     {a[index]=value;}
};
class stack:private array
{
private:
int  top=-1;
top=top+1;
public:
int push(top,value)
{ insert(top, value);}
void display()
{cout<<a[0];}
};
int  main()
{ stack s;
s.push(5);
s.display();
}