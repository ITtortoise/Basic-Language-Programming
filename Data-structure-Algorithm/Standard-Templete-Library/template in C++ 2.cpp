#include<bits/stdc++.h>
using namespace std;
template<class X>
X big(X m,X n)
{
    if(m>n)
        return m;
    else
        return n;
}
int main()
{
    cout<<big(8,10)<<endl;
    cout<<big(5.8,2.6)<<endl;

    return 0;
}

