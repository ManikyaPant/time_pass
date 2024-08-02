#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n,k;
cin >> n >>k;
priority_queue <int> max_heap;

for(int i=0;i<n;i++) {
    int val;
    cin >> val;
    max_heap.push(val);
}
int ans=0;
for(int i=1;i<=k;i++) {
    if(!max_heap.empty()) {
    ans+=max_heap.top();
    max_heap.push(max_heap.top() / (1<<(i)));
    max_heap.pop();
    }
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