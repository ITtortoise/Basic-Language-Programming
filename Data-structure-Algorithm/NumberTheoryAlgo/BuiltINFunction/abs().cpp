//Program asks for user input of an integer
//It will convert it to positive if it was negative
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int aNum;
  cout<<"Enter a positive or negative integer:";
  cin>>aNum;
  cout<<abs(aNum);
}
