#include <bits/stdc++.h>
using namespace std;

#define esh29() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define ep emplace_back
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define MOD 1000000007
#define w(t) int t; cin >> t; cin.ignore(); while (t--)
bool pao(int n)
{
    while (n % 2 == 0)
    {
        n /= 2;
    }

    return n == 1;
}


int main() {
    esh29();
ll n;
while (cin>>n && n!=0){
	ll c=0;
	while (n>9 ){
	 c = n%10;
	 n /=10;
		n +=c;
	}
	cout<<n<<endl;
}
    
	
    return 0;
}
