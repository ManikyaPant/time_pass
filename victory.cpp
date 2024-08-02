#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n;
cin >> n;
int sum=0;
 int v;
for(int i=0;i<n-1;i++) {
    cin >> v;
    sum+=v;
}
cout << -1*sum << endl; 
}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1; cin >> t;
 while(t--) {
solve();
}
return 0;
}