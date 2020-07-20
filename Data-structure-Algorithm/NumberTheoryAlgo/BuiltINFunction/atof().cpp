//Example reads in a string, and converts it to an float
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
  char a_char[10];
  cin>>a_char;
  cout<<"As a float: "<<atof(a_char);
}
