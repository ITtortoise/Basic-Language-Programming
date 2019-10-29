#include<bits/stdc++.h>
using namespace std;
int main()
{

    array <int,5> array_data1= {3,4,5,6,7};
    array <int,5> array_data2= {33,44,55,66,77};
    cout<<array_data1[2]<<endl;
    cout<<array_data1.at(2)<<endl;
    cout<<array_data1.front()<<endl;
    cout<<array_data1.back()<<endl;
    cout<<array_data1.size<<endl;
    array_data1.fill(10);
    for(int i=0; i<6; i++)
    {
        cout<<array_data1[i]<<" ";
    }
    cout<<endl;
    array_data1.swap(array_data2);
    for(int i=0; i<5; i++)
    {
        cout<<array_data1[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<array_data2[i]<<" ";
    }



}
