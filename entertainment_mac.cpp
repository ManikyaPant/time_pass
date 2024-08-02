#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
string s;
int n;

cin >> n;
cin >> s;

int l=s.length();

if(s[0] < s[l-1]) {
    cout << s << endl;
    return;
}
if(s[0]==s[l-1]) {
    int p1=l-1;
    int p2=0;

    while(p2 <=p1) {
        if(s[p1] < s[p2]) {
        string st=s;
           reverse(s.begin(),s.end());
         s.append(st);
         cout << s << endl;
         return;
        }
        else if(s[p1] > s[p2]) {
            cout << s << endl;
            return;
        }
            p1--;
            p2++;
        
    }
    cout << s << endl;
            return;
}
else {
    string st=s;
    reverse(s.begin(),s.end());
    s.append(st);
    cout << s << endl;
}

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1; cin >> t;
 while(t--) {
solve();
}
return 0;
}