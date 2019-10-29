#include<iostream>
using namespace std;
struct employ
{
    int employid;
    char employname[100];
    float employsalary;
    void input()
    {
        cout<<"enter employ id ,employ name and salary:";
        cin>>employid>>employname>>employsalary;
    }
    void display()
    {
        cout<<employid<<employname<<employsalary;
    }

};
int main()
{
    employ e1;
    e1.input();
}
