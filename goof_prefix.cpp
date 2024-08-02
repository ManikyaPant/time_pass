#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n;
  cin >> n;
  int arr[n];
  int sum = 0;
  int ans = 0;
  set<int> st;
        st.insert(0);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    st.insert(arr[i]);
    sum += arr[i];
    if (st.find(sum/2) != st.end())
      ans++;
  }
  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
