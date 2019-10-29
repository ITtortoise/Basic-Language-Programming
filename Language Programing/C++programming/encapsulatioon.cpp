#include<iostream>
using namespace std;
struct book
{
    private:
    int bookid;
    char bookname[100];
    float bookprice;
    public:
    void input()
    {
        cout<<"enter book id,name,price";
        cin>>bookid>>bookname>>bookprice;
    }
    void display()
    {
        cout<<bookid<<bookname<<bookprice;
    }
};
int main()
{
    book b1;
    b1.input();
    b1.display();
}
