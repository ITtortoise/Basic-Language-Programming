#include<bits/stdc++.h>
using namespace std;

//Program calls atexit with FinalFunction
//FinalFunction is executed before program ends
void FinalFunction(void)
{
    cout<<"Final function called";
}
int main()
{
  atexit(FinalFunction);
}
