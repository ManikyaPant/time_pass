#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {

int n,k;
cin >> n >> k;

if(n%k!=0) {
    cout << 1 << endl << n << endl;
}
else {
    cout  << 2 <<  endl << n-1 << " " << 1 << endl;
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