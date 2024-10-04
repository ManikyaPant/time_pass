#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, m, q, val;
    cin >> n >> m >> q;
    set<int> st;

    // Reading teacher positions
    for (int i = 0; i < m; i++) {
        cin >> val;
        st.insert(val);
    }

    // Handling queries
    for (int i = 0; i < q; i++) {
        cin >> val;

        // Find the largest element less than or equal to val
        auto it = st.lower_bound(val);

        int left_dist = INF, right_dist = INF;

        if (it != st.begin()) {
            // There is an element less than or equal to val
            auto prev_it = prev(it);
            left_dist = val - *prev_it;
        }

        if (it != st.end()) {
            // There is an element greater than or equal to val
            right_dist = *it - val;
        }

        // Calculate the maximum distance to the nearest teacher
        int ans = max(left_dist, right_dist);
        cout << (ans + 1) / 2 << endl;  // Adjust distance to nearest teacher
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

