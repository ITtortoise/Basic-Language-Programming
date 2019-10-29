#include<iostream>
using namespace std;
class account
{
    private:
    int balance;
    static int roi;
    public:
        void setBalance(int b)
        {
            balance=b;
        }
        void display()
        {
            cout<<balance<<" "<<roi<<endl;
        }

};
    int account::roi=6;
    int main()
    {
        account a1,a2;
        a1.setBalance(2000);
        a2.setBalance(4000);
        a1.display();
        a2.display();
    }