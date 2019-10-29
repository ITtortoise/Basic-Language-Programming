#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]= {4,6,9,2,5},b[5]= {3,10,1,5,11},i,j=0,k=0,c[100];
    for(int i=0; i<10; i++)
    {
        c[i]=a[k];
         k++;
        if(i>4)
        {
            c[i]=b[j];
            j++;
        }
    }
    sort(c,c+10);
    for(int i=0; i<10; i++)
       cout<<c[i]<<" ";
}
