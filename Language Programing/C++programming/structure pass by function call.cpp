#include<iostream>
#include<string>
using namespace std;
struct book
{
    int bookid;
    char booktitle[100];
    int bookprice;

};
void display(book b3);
book input();
int main()
{
    book b1;
    cout<<"enter bookid,title and price:"<<endl;
    b1=input();
    display(b1);
}

book input()
{
    book b;
    cin>>b.bookid>>b.booktitle>>b.bookprice;

    return (b);
}
void display(book b3)
{
    cout<<"bookid:"<<b3.bookid<<endl<<"book title:"<<b3.booktitle<<endl<<"bookprice:"<<b3.bookprice;
}
