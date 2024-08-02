#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n,k;
cin >> n >>k;
map <int,int> st;
    int ans=0;
for(int i=0;i<n;i++) {
    int val;
    cin >> val;

    if(st.find(val-k)!=st.end()) {
        ans+=st[val-k];
    }
    if(st.find(val+k)!=st.end() && k) {
        ans+=st[val+k];
    }

    st[val]=++st[val];
    // cout << st[val] << endl;
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