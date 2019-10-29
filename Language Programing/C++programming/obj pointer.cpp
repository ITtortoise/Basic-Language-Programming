#include<iostream>
using namespace std;
class box
{
     private:
int l,w,h;
public:
void setdata(int x,int y,int z)
{l=x;w=y;h=z;}
void showdata()
{
    cout<<"l="<<l<<"w="<<w<<"h="<<h;
}
};
int main()
{
box *p,b1;
p=&b1;
p->setdata(10,5,7);
p->showdata();
}




