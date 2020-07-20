#include<bits/stdc++.h>
#define M 10000000
using namespace std;
long long n,i,j,k,sqrtn;
bool prime[10000000];
int main()
{
    for(int i = 2; i <= sqrt(M); i++)
        if(prime[i] == 0)
            for(int j = i+i; j <= M; j += i)
                prime[j] = 1;



}
