#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n;
cin >> n;
int ans=0;
ans=((((n*(n+1))%MOD)*(4*n-1))%MOD*337)%MOD;
// cout << v1 << " " << v2 << " " ;
cout << (ans) %MOD<< endl;
}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t; cin >> t;
 while(t--) {
solve();
}
return 0;
}