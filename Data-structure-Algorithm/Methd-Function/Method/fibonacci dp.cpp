#include<bits/stdc++.h>
using namespace std;
int dp[20];
int fib( int n )
{
    if(dp[n]==-1)
    {
        if(n<=1)return n;
        else
            dp[n]=fib(n-1)+fib(n-2);
    }
    return dp[n];
}
int main()
{
    int n,i,j;
    for(i=0; i<20; i++)
        dp[i]=-1;
    cin>>n;
    cout<<fib(n);
}
