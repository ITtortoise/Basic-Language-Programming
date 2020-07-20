#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,T=0;
    char c;
    while(cin>>c)
    {  if(c=='Q')
          {break;}
       if(c!='A'&&c!='S'&&c!='M'&&c!='D'&&c!='R')
        {cout<<"MATH ERROR"<<endl;}
        cin>>a>>b;
        T++;
        if(c=='A')
        cout<<"Case"<<" "<<T<<":"<<(a+b)<<endl;
    else if(c=='S')
        cout<<"Case"<<" "<<T<<":"<<a-b<<endl;
    else if(c=='M')
        cout<<"Case"<<" "<<T<<":"<<b*a<<endl;
    else if(c=='D')
        cout<<"Case"<<" "<<T<<":"<<a/b<<endl;
    else if(c=='R')
        cout<<"Case"<<" "<<T<<":"<<a%b<<endl;

    }


}
