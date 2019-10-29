#include<iostream>

using namespace std;
class account
{
    int a,b;
   public:
    void setvalue(int x,int y)
    {
       a=x;b=y;
    }
    friend float add(account a1);
};
float add(account a1)
{
   return float(a1.a+a1.b)/2;
}
int main()
{
    account a1;
    a1.setvalue(5,7);
    cout<<"\n Mean value is : "<<account(a1);

}
