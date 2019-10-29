#include<iostream>
using namespace std;
int main()
{
cout<<biggest(6,6.5);
cout<<endl;
cout<<biggest(7,6.5);
}
template<class T,class R>
 R biggest(T x,R y)
{
if(x>y)
return (x);
else
return(y);}

