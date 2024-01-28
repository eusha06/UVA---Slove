#include <bits/stdc++.h>
using namespace std;

#define sakalakabumbum() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define ep emplace_back
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define MOD 1000000007
#define w(t) int t; cin >> t; cin.ignore(); while (t--) 

ll bao(ll a, ll b, ll m) {
    ll ans = 0;
    while (b > 0) {
        if (b & 1) {
            ans = (ans + a) % m;
        }
        a = (a + a) % m;
        b >>= 1;
    }
    return ans;
}

ll bin(ll a, ll b, ll m) {
    ll ans = 1;
    while (b) {
        if (b & 1) {
            //ans = bao(ans, a, m);
            ans = (ans*a)%m;
        }
        //a = bao(a, a, m);
        a = (a*a)%m;
        b >>= 1;
    }
    return ans;
}

int main() {
	w(t){
    ll a, b, c;
   cin>>a>>b>>c;
        cout << bin(a, b, c) << endl;
    }

    return 0;
}
