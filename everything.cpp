#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n,k;
cin >> n >> k;

string s,st;
for(int j=0;j<k;j++) {
    char c=(char)(97+j);
    // cout << c << endl;
          st.append({c});
    }
for(int i=0;i<n;i++) {
  s.append(st);
    
}
cout << s << endl;
}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1; cin >> t;
 while(t--) {
solve();
}
return 0;
}