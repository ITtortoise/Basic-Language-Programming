#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

ll bigMod(ll n, ll k)
{
    if(k == 1) return n % mod;

    ll re = bigMod(n, (k / 2));
    re = (re * re) % mod;

    if(k % 2 == 1) {
        re = (re * n) % mod;
    }

    return re;
}

//(a / b) % cc
//= (a  % cc) * ((1 / b) % cc)
//= (a % cc) * (b ^ (cc - 2)) % cc
//
//Fermats little Theorem :
//if p is a prime,
//
//(a^p) % p = (a) % p
//
//(a^(p - 1)) % p = 1 % p
//
//(a^(p-2)) % p = (1 / a) % p

/// nCr = (n!) / (r! * (n - r)!)

ll fct[200000];

ll nCr(ll n, ll r)
{
    ll ans = fct[n];

    ll invr = bigMod(fct[r], mod - 2);
    ll inv2 = bigMod(fct[n - r], mod - 2);

    ans = (ans * invr) % mod;
    ans = (ans * inv2) % mod;
    return ans;

}

int main()
{
//    ///(16/2) % 5 = 8 % 5 = 3
//
//    ll a = 16, b = 2, c = 5;
//
//    /// (a / b) % c
//    ll ans = ((a % c) * bigMod(2, c - 2, c)) % c;
//
//    cout << ans << endl;

    fct[0] = 1;
    for(ll i = 1; i <= 100000; i++) fct[i] = (fct[i - 1] * i) % mod;

    while(true){
        ll n, r;
        cin >> n >> r;

        cout << nCr(n, r) << endl;
    }

    return 0;
}
