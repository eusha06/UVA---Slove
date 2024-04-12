#include <bits/stdc++.h>
using namespace std;

#define esh29() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define ep emplace_back
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define form(i, n) for(int i = 1; i < int(n); i++)
#define MOD 1000000007
#define w(t) int t; cin >> t; cin.ignore(); while (t--)

int main()
{
    esh29();
    ll c=0,n;
    string a;
    w(t)
    {
    	cin>>a;
    	if (a=="donate"){
    		cin>>n;
    		c +=n;
    	}
    	else {
    		cout<<c<<endl;
    	}
        
    }

    return 0;
}
