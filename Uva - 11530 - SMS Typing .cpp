#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define MOD 1000000007
#define w(t) int t; cin>>t; while (t--)
int main() {
ll t;
cin>>t;
cin.ignore();
for (ll j=1; j<=t; j++){
     ll i,c=0;
    string a;
    getline (cin,a);
    for (i=0; i<a.size(); i++){
        if (a[i]==' '){
            c++;
        }
        else if (a[i]=='a' || a[i]=='d' || a[i]=='g' || a[i]=='j' || a[i]=='m' || a[i]=='p' || a[i]=='t' || a[i]=='w' ){
            c++;
        }
        else if (a[i]=='b' || a[i]=='e' || a[i]=='h' || a[i]=='k' || a[i]=='n' || a[i]=='q' || a[i]=='u' || a[i]=='x') {
            c = c+2;
        }
        else if (a[i]=='c' || a[i]=='f' || a[i]=='i' || a[i]=='l' || a[i]=='o' || a[i]=='r' || a[i]=='v' || a[i]=='y'){
            c = c+3;
        }
        else if (a[i]=='s' || a[i]=='z'){
            c = c+4;
        }
    }
    cout<<"Case #"<<j<<": "<<c<<endl;
}
   

return 0;
}
