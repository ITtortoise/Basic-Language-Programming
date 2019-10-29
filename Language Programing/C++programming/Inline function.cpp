#include<iostream>
using namespace std;
int summation(int ,int);
int main()
{
int a=5,b=10;
cout<< summation( a,b);
}
inline int summation(int x,int y)
{
int sum;
 sum=x+y;
return(sum);
}