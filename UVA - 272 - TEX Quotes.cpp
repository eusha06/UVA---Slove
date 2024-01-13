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
string a;
int i,n=0;
while (getline(cin,a)){
	forn(i,a.size()){
		if (a[i]=='"'){
			n++;
			if (n&1)
			cout<<"``";
			else 
			cout<<"''";
		}
		else {
			cout<<a[i];
		}
	}
	cout<<endl;
}
    return 0;
}
