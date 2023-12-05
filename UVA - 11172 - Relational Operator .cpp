#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define MOD 1000000007
#define w(t) int t; cin>>t; while (t--)
int main(){
w(t){
    ll a,b;
    cin>>a>>b;
    if (a>b){
        cout<<">"<<endl;
    }
    else if (a<b){
        cout<<"<"<<endl;
    }
    else {
        cout<<"="<<endl;
    }
}
return 0;
}
