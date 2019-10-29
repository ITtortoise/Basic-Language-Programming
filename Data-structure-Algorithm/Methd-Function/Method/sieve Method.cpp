#include<bits/stdc++.h>
#define sz 100000000
using namespace std;
long long int a[sz];
int main()
{
    int p,j,k,l;
    a[0]=a[1]=1;
    for(p=2; p<=sqrt(1e7); p++)
    {
        if(a[p]==0)
        {

            for(j=p*p; j<=1e7; j=j+p)
            {
                a[j]=1;
            }
        }
    }
    cout<<a[497]<<" "<<a[501];

}


