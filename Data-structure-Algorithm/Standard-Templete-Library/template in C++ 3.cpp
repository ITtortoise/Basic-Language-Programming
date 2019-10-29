#include<bits/stdc++.h>
using namespace std;
template <class X,class Y>
X big(X m,Y n)
{
    if(m>n)
        return m;
    else
        return n;
}
int main()
{
    cout<<big(15,20.5)<<endl;
    cout<<big(50.5,10)<<endl;
    return 0;
}

