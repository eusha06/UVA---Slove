#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define MOD 1000000007
#define w(t) int t; cin>>t; while (t--)
ll eusha(int n) {
  
    ll r = 0;
    ll m = 1;
    while (n > 0) {
        ll p = n % 3;
        r += m * p;
        m *= 10;
        n /= 3;
    }

    return r;
}


int main() {
    ll n,ans;
    while (cin >> n && n >= 0) {
     ans = eusha(n);
        cout << ans << endl;
    }

    return 0;
}
