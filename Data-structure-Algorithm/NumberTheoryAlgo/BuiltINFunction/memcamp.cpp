//Program compares two character arrays
//Program compares only to eight letters
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    int comp_val=memcmp("Andersronc", "Zandimva",  7);
    if ( comp_val == 0 )
    {
        cout<<"strings are equal";
    }
    if ( comp_val<0 )
    {
        cout<<"String one is alphabetically equal";
    }
    else
    {
        cout<<"String one is alphabetically greater";
    }
}
