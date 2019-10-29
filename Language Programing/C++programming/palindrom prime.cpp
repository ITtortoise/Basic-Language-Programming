#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,rev,i,a=0,u,k;
    cin>>n;

     for(i=1;i<=n;i++)
    {
        a=i;
        rev=0;
        while(a>0)
        {
            rem=a%10;
            rev=(rev*10)+rem;
            a=a/10;
        }

        if(i==rev)
        {   //cout<<i<<endl;
            u=0;
            for(k=2;k<=sqrt(i);k++)
            {
                if(i%k==0)
                    u++;
            }
            if(u==0)
                {if(i>1)
                    cout<<i<<endl;}
        }

        }
}
