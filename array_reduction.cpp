#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n;
cin >> n;
priority_queue <int, vector<int>, greater<int>> min_heap;

for(int i=1;i<=n;i++) {
    int val;
    cin >> val;
    min_heap.push(val);
}

int ans=0;

while(min_heap.size()!=1) {
    int val1=min_heap.top();
    min_heap.pop();
    int val2=min_heap.top();
    min_heap.pop();
    int val3=val1+val2;
    ans+=val3;
    min_heap.push(val3);
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