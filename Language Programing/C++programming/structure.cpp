#include<iostream>
using namespace std;
struct book
{
  char title[100];
  char author[100];
  int bookid;
};
int main()
{
struct book book1;
struct book book2;
strcpy(book1.title,"c program");
strcpy(book2.title,"c++ program");
strcpy(book1.author,"balagurusamy");
strcpy(book2.author,"hervert shill");
book1.bookid=1010;
book2.bookid=1020;
cout<<book1.title<<endl<<book1.author<<endl<<book1.bookid<<endl;
cout<<book2.title<<endl<<book2.author<<endl<<book2.bookid<<endl;}