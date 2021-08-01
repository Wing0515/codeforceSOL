//Wing Law CUHK|Computer Science
#include <bits/stdc++.h>
 
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll k, n;
    cin >> n >> k;
    ll oddend;
    ll o;
    if(n % 2 ==  0) oddend = n / 2;
    else oddend = n / 2 + 1;
    if(k <= oddend)
        o = 2 * k - 1;
    else
        o = 2 * (k - oddend);
    cout << o << "\n";
    return 0;
}