#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    char ch;
    fin.open("My_File 1.dat");
    fin>>ch;
    while(!fin.eof()){
        cout<<ch;
        fin>>ch;
    }
    return 0;
}
