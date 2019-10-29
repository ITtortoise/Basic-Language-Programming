#include<iostream>
#include<string>
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

/*#include<iostream>
#include<string>
using namespace std;
struct book
{
    int  bookid;
    char title[100];
    float price;
    void input()
    {
        cout<<"enter book id,book title and book price";
        cin>>bookid>>title>>price;
    }
    void display()
    {
        cout<<bookid<<title<<price;
    }
};
int main()
{
    book b1;
    b1.input();
    b1.display();
}*/

