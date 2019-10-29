#include<iostream>
using namespace std;
template<class t>
t biggest(t x,t y)
{
if(x>y)
return (x);
else 
return(y);}
int main()
{
cout<<biggest(5,10);
cout<<endl;
cout<<biggest(5.5,10.5);
}

