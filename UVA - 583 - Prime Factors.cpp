
#include <bits/stdc++.h>
using namespace std;
#define sakalakabumbum() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define ep emplace_back
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define MOD 1000000007
#define w(t) int t; cin >> t; cin.ignore(); while (t--) 

int main() {
	sakalakabumbum();
ll n,i,c;
while (cin>>n && n!=0){
	vector<int>a;
	cout<<n<<" =";
	if (n<0){
		cout<<" "<<-1;
		n *= -1;
		for (i=2; i<=sqrt(n); i++){
			while (n%i==0){
				a.pb(i);
				n /=i;
			}
		}
		if (n>1){
			a.pb(n);
		}
		for (auto p: a){
			cout<<" x "<<p;
		}
		cout<<endl;
	}
	else {
		for (i=2; i<=sqrt(n); i++){
			while (n%i==0){
				a.pb(i);
				n /=i;
			}
		}
		if (n>1){
			a.pb(n);
		}
		cout<<" "<<a[0];
		for (i=1; i<a.size(); i++){
			cout<<" x "<<a[i];
		}
		cout<<endl;
	}
}
    return 0;
}
