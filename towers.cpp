#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n;
cin >> n;
vector <int> arr(n);
for(int i=0;i<n;i++) {
    cin >> arr[i];
}

multiset <int> cnt;
int ans=0;
for(int i=0;i<n;i++) {
// cout << "yes" << endl;
    auto ub=cnt.upper_bound(arr[i]);
    if(ub==cnt.end()) {

        ans++;
        }
    else {
        cnt.erase(ub);
    }
    cnt.insert(arr[i]);
    }
cout <<ans << endl;
}

signed main() {
// ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t; cin >> t;
 while(t--) {
solve();
}
return 0;
}