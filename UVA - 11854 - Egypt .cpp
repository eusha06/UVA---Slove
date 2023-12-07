#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define MOD 1000000007
#define w(t) int t; cin>>t; while (t--)
int main() 
{
ll a,b,c,m=0,k,mi,n;
  
while (cin>>a>>b>>c && (a>0 || b>0 || c>0)){
	k = a+b+c;
	m = max({a,b,c});
	mi = min({a,b,c});
	n = k-(m+mi);
	if ((m*m)==((mi*mi)+(n*n))){
		cout<<"right"<<endl;
	}
	else {
		cout<<"wrong"<<endl;
	}
}
return 0;
}
