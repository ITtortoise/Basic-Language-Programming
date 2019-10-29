#include<iostream>
using namespace std;
class test
{
    private:
    int no;
    static int c;//intance variable
    public:
    void setdata(int b)//class variable
    {
        no=b;
        cout<<no<<endl;
        c++;}
    void display()
    {
        cout<<c<<endl;;
    }
};
int test::c;//membership level
int main()
{
    test a1,a2,a3;

    a1.display();
    a2.display();
    a3.display();
    a1.setdata(3);
    a2.setdata(30);
    a3.setdata(300);
    a1.display();
    a2.display();
    a3.display();
}
