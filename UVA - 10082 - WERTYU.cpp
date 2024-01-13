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

string ans = {"`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./"};
string a;
int i,n,j,s;
char ch;

while (getline(cin,a)){
for (i=0; i<a.size(); i++){
	ch = a[i];
	if (ch==' '){
		cout<<a[i];
	}
else if (a[i]=='A' || a[i]=='Q' ||a[i]=='Z' || a[i]=='`' ){
	cout<<a[i];
}
	else {
		for (j=0; j<ans.size(); j++){
			if (ch==ans[j]){
				n=j;
				break;
			}
		}
		cout<<ans[n-1];
	}
}
cout<<endl; 
}
    return 0;
}
