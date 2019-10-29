//Program uses time function to seed random number generator
//and then generates random number
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int d=rand()%12;
    cout<<d;
}
