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
	int t;
	cin>>t;
	for (int j=1; j<=t; j++){
cout<<"Case "<<j<<": ";
int a[3];
forn(i,3){
	cin>>a[i];
}
sort(a,a+3);
cout<<a[1]<<endl;
}

    
    
    
 
    return 0;
}
