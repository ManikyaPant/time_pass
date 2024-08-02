#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n,q;
cin >> n >>q;
vector <int> arr(n);
for(int i=0;i<n;i++) {
    cin >> arr[i];
}
sort(arr.begin(),arr.end());
vector <int> pre(n,arr[0]);
for(int i=1;i<n;i++) {
    pre[i]=pre[i-1]+arr[i];
}
while(q--) {
   int val;
   cin >> val;
   cout << upper_bound(pre.begin(),pre.end(),val)-pre.begin() << endl;
}

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

solve();
return 0;
}