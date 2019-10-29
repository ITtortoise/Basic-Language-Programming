#include<fstream>
#include<iostream>
using namespace std;
int main()
{
   ofstream fout;
fout.open("my file.data");
fout<<"hello";
fout.close();

}
