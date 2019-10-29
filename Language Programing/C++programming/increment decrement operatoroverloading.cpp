#include<iostream>
using namespace std;
class integer
{
private:
    int a,b;
public:
    void setdata(int x)
    {
        a=x;
    }
     integer operator++()//preincrement
     {
         integer temp;
         temp.a=++a;
         return (temp);
     }
     /*integer operator++(int)//postincrement
     {
         integer temp;
         temp.a=a++;
         return (temp);
     }*/
     void showdata()
     {
         cout<<"a="<<a<<" ";
     }
};
    int main()
    {
        integer c1,c2;
        c1.setdata(5);
        c1.showdata();
        c2=++c1;
        //c2=c1++;
        c2.showdata();
        //c1.showdata();
    }

