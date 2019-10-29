#include<iostream>
using namespace std;
class box
{
     private:
int l,w,h;
public:void setdata(int l,int w,int h)
{this->l=l;this->w=w;this->h=h;}
void showdata()
{
    cout<<"l="<<l<<"w="<<w<<"h="<<h;
}
};
int main()
{
box b1;
b1.setdata(10,5,7);
b1.showdata();
}
