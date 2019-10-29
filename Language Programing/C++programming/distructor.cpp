#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    ~complex()
    {
        cout<<"distractor is working";
    }

};
void fun()
{
    cout<<"i am an ictan"<<endl;
}

int main()
{
    complex c1;
    fun();
}
