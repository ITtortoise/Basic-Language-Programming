#include<iostream>
using namespace std;
struct book
{
    int bookid;
    char booktitle[100];
    int bookprice;
};

int main()
{
    book b1;
    +++++++++++++++++++++++++++++++++b1.input();
    b1.display();

}
void input()
{   cout<<"enter book id,book title and book price"<<endl;
    cin>>bookid>>title>>price;
}
void display()
{
    cout<<bookid<<title<<price<<endl;
}
