#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool cmp(const int &a, const int &b) { return a > b; }

int calculate(int val, int ind, int n) {

  int ans = (n - ind - 1) * val - (ind * val);
  return ans;
}

void solve() {

  int n, m;
  cin >> n >> m;
  vector<vector<int>> arr(m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int val;
      cin >> val;
      arr[j].push_back(val);
    }
  }

  for (int i = 0; i < m; i++) {
    sort(arr[i].begin(), arr[i].end(), cmp);
  }
  int ans = 0;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      ans += calculate(arr[i][j], j, n);
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
  while (t--) {
    solve();
  }
  return 0;
}
