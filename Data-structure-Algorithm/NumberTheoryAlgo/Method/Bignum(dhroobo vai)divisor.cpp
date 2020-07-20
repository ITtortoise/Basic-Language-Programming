#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll maxn = 2000000;
bool isPrime[maxn];

vector < ll > primes;

void sieve(ll n)
{
    for(ll i = 2; i <= n; i++){
        if(isPrime[i]) continue;
        for(ll j = i + i; j <= n; j += i) {
            isPrime[j] = 1;
        }
        primes.push_back(i);
    }
}


int main()
{
    sieve(maxn - 10);
    cout << primes.size() << endl;

    ll n;
    cin >> n;
    ll m = n;

    ll tmp = sqrt(n);

    for(ll i = 0; i < primes.size(); i++){
        if(primes[i] > tmp) break;
        if(n % primes[i] != 0) continue;

        while(n % primes[i] == 0) n = n / primes[i];

        printf("%lld is a prime of %lld\n", primes[i], m);

    }

    if(n != 1){
        cout << n << endl;
    }



    return 0;
}
