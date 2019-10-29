#include<bits/stdc++.h>
using namespace std;
int main()
{
    tuple<string,string,int> t1;
    t1=make_tuple("shohag","want to be a programmer",21);
    cout<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1)<<" ";
}
