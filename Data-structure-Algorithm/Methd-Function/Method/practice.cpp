#include<iostream>
#include<string>
using namespace std;
struct employ
{
    int employid;
    char employname[100];
    int employsalary;
};
employ input();
int main()
{
    employ e1,e;
    cout<<"enter employee id,name and salary:"<<endl;
    e=input();
    cout<<e.employid<<e.employname<<e.employsalary<<endl;
}
employ input()
{
    employ e2;
    cin>>e2.employid>>e2.employname>>e2.employsalary;
    return(e2);
}
