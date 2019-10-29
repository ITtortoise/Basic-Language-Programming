//Example concatenates two strings to output
//By asking the user for input
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    string s1,s2;
    cout<<"Enter string one(without spaces): ";
    cin>>s1;
    cout<<"Enter string two(without spaces): ";
    cin>>s2;
    cout<<strcat(s1, s2);
}
