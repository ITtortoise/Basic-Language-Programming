
#include <cctype>
#include <iostream>

using namespace std;

int main()
{
    char d;
    cout<<"Enter a character, number, or punction sign: ";
    cin>>d;
    if(isalpha(d))
    {
        cout<<"You entered an alphabetical character.";
    }
    //Example reads in a character and checks to see if it is a digit

    else if(isdigit(d))
    {
        cout<<"Is a digit!";
    }
    else if(isspace(d))
    {
        cout<<"Is is a space!";
    }
}

