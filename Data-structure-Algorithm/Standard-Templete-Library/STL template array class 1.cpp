#include<bits/stdc++.h>
using namespace std;
int main()
{
    array <int,5>data_array; // fixed array_element of an object //

    for(int i=0;i<5;i++)
        cin>>data_array[i];
    for(int i=0;i<5;i++)
        cout<<data_array[i]<<" ";

    cout<<endl;

    cout<<data_array[3]<<endl;
    cout<<data_array.at(2)<<endl;
    cout<<data_array.size()<<endl;
    cout<<data_array.front()<<endl;
    cout<<data_array.back()<<endl;
    data_array.fill(10);

    for(int i=0;i<5;i++)
        cout<<data_array[i]<<" ";
    return 0;
}

