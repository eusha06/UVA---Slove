#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define MOD 1000000007

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
      
        string a;
        getline(cin, a);
        stack<char> ch;
        bool m = false;
        for (char c : a) {
            if (c == '(' || c == '[') {
                ch.push(c);
            } 
            else if (c == ')' || c == ']')
            {
                if
                  (ch.empty() || (c == ')' && ch.top() != '(') || (c == ']' && ch.top() != '['))
                {
                    m = true;
                    break;
                }
                ch.pop();
            }
        }
        if  (m==true || !ch.empty() ){
            cout<<"No"<<endl;
        }
        else {
            cout<<"Yes"<<endl;
        }
      
    }

    return 0;
}
// esh29
