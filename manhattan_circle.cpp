// task just find the centre of the circle
// on observing pattern find the range of x and range of y
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n, m;
  cin >> n >> m;
  char grid[n][m];
  int y1 = INF, y2 = -INF, x1 = INF, x2 = -INF;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> grid[i][j];
      if (grid[i][j] == '#') {
        y1 = min(y1, i + 1);
        y2 = max(y2, i + 1);
        x1 = min(x1, j + 1);
        x2 = max(x2, j + 1);
      }
    }
  }

  cout << (y1 + y2) / 2 << " " << (x1 + x2) / 2 << endl;
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
