#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <int,string> customer;
    customer[100]="sjfkl";
    customer[220]="fgdkl";
    customer[300]="rtertkl";
    customer[450]="kkjkkl";
    customer[500]="qwqwwkl";
    //cout<<customer[100];
    map<int,string>c{{100,"sjfkl"},{220,"fgdkl"}};
    //cout<<c[100];
    cout<<c.at(100);
     map<int,string>::iterator p=customer.begin();
     while(p!=customer.end())
     {
         cout<<p->second<<endl;
         p++;
     }



}
