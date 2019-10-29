#include<bits/stdc++.h>
using namespace std;
template<class X>
class array
{
    X a[10];
public:
    void setData()
    {
        for(int i=0; i<5; i++)
            cin>>a[i];
    }
    void showData()
    {
        for(int i=0; i<5; i++)
            cout<<a[i]<<" ";
    }
};
int main()
{
    array <float> a1;
    a1.setData();
    a1.showData();
    return 0;
}
