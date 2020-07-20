// string::erase
#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
long long a[sz];
using namespace std;
typedef long long ll;
int main()

{
    int i,j;
    string str ("This is an example sentence.");
    cout << str << '\n';
    //cin>>i>>j;
    str.erase (10,8);//i:the index from where you want to erase..  j:num. of char that you want to erase//
    cout << str << '\n';

    str.erase (str.begin()+9);
    cout << str << '\n';

    str.erase (str.begin()+5, str.end()-9);
    cout << str << '\n';

    return 0;
}
