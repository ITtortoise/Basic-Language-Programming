#include<iostream>
using namespace std;
class complex
{
    complex a,b;
    public:
    void set_data(int x,int y)
    {
        a=x;b=y;
    }


    void show_data()
    {
        cout<<a<<b<<endl;
    }


    complex add(complex c)
    {
        comple temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return (temp);
    }

};
int main()
{
    complex c1,c2,c3;
    c1.set_data(4,7);
    c2.set_data(3,8);
    c3=c1.add(c2);
    c3.show_data();

}
