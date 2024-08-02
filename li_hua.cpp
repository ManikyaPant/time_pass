#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {

  int n, k;
  cin >> n >> k;

  int grid[n][n];
  int r_grid[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      r_grid[i][j] = grid[n - i - 1][n - j - 1];
    }
  }

  int op = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (r_grid[i][j] != grid[i][j])
        op++;
    }
  }
        op/=2;
  if (op > k)
    cout << "NO" << endl;
  else {
    if (n % 2 == 1)
      cout << "YES" << endl;
    else {
      if ((k - op) % 2 == 0)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
  }
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
