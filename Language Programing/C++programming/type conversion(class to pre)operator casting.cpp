#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setvalue(int x,int y)
    {
        a=x;b=y;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
    operator int()
    {
        return(a);
    }

};
int main()
{
    complex c1;
    c1.setvalue(3,9);
    c1.display();
    int x;
    x=c1;
    cout<<x;
}
