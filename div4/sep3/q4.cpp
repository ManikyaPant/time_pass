#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n;
    cin >> n;
    
    set<int> st;
    int c = 0;
    int ans = 0;
    set<int> s0, s1;
    vector<pair<int, int>> arr(n);
    
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr[i] = {x, y};

        if(y == 0) {
            s0.insert(x);
        }
        if(y == 1) {
            s1.insert(x);
        }
        
        if(st.find(x) != st.end())
            c++;
        st.insert(x);
    }
    
    ans = c * (n - 2);
    
    for(int i = 0; i < n; i++) {
        int x = arr[i].first;
        int y = arr[i].second;
        if(y == 1) {
            if((s0.find(x - 1) != s0.end()) && (s0.find(x + 1) != s0.end())) {
                ans++;
            }
        }
        
        if(y == 0) {

            if((s1.find(x - 1) != s1.end()) && (s1.find(x + 1) != s1.end())) {
                ans++;
            }
        }
    }
    
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

