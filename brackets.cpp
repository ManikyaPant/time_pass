#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
string st;
cin >> st;
int depth=0;
int ans=0;
for(auto c: st) {
     if(c==')') {
        depth--;
     }
     else {
        depth++;
     }
    if(depth<0) {
        ans++;
        depth++;
    }
}
if(depth!=0) {
    ans=ans+depth;
}
cout << ans << endl;
}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t; cin >> t;
 while(t--) {
solve();
}
return 0;
}