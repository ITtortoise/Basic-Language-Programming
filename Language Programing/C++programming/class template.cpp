#include<bits/stdc++.h>
using namespace std;
template <class X>

class array
{
    X a[100];
public:
    void setvalue()
    {
        for(int i=0; i<5; i++)
            cin>>a[i];
    }
    void showvalue()
    {
        for(int i=0; i<5; i++)
            cout<<a[i]<<" ";
    }

};
int main()
    {
        array <int> a1;
        a1.setvalue();
        a1.showvalue();
    }


