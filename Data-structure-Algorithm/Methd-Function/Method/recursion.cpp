#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//ll fnc1(ll a, ll b)
//{
//    return a + b;
//}

ll fnc2(ll n)
{
    if(n == 0) return 0;
    ll ans = fnc2(n / 2) + 1;
//    cout << c << ' ' << ans << endl;
    return ans;
}

//fnc2(10) = fnc2(5) + 1 = 4
//fnc2(5) = fnc2(2) + 1 = 3
//fnc2(2) = fnc2(1) + 1 = 2
//fnc2(1) = fnc2(0) + 1 = 1
//fnc2(0) = 0
//
//fnc2(100) = fnc2(50) + 1 = 16
//fnc2(50) = fnc2(25) + 1 = 15
//fnc2(25) = fnc2(12) + 1 = 14
//fnc2(12) = fnc2(6) + 1 = 13
//fnc2(3) = fnc2(1) + 1 = 2
//fnc2(1) = fnc2(0) + 1 = 1
//fnc2(0) = 0

//(-3)! = (-3) * (-2)!
//(-2)! = (-2) * (-1)!
//(-1)! = (-1) * 0!
//
//n! = n * (n - 1)!
//3! = 3 * 2!
//2! = 2 * 1!
//1! = 1 * 0!

//fnc(3) = 6
//fnc(4) = 24
//fnc(5) = 120

ll fnc(ll n)
{
    if(n == 0) return 1;
    if(n > 0){
        ll ans = n * fnc(n - 1);
        return ans;
    }
    else{
        return n * fnc(n + 1);
    }
}

//fib(0) = 0
//fib(1) = 1
//fib(2) = 1
//fib(n) = fib(n - 1) + fib(n - 2)
//fib(3) = fib(2) + fib(1)
//fib(2) = fib(1) + fib(0)

ll fib(ll n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
//    cout << n << endl;
    ll ans = fib(n - 1) + fib(n - 2);
    return ans;
}



ll fct[1000];
int main()
{
//    fct[0] = 1;
//    for(ll i = 1; i <= 10; i++) fct[i] = (i * fct[i - 1]);
    for(int i = 1; i <= 100; i++){
        cout << i << ' ' << fib(i) << endl;
    }
    return 0;
}
