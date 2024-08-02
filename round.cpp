#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n;
  string str;
  cin >> n;
  cin >> str;
  int cr = 0, cl = 0, w = 0;
  int cur_dir = 0;
  int x = 0, y = 0;
  for (int i = 0; i < n; i++) {
    if (str[i] == 'R') {
      cur_dir = (cur_dir + 1) % 4;
    } else if (str[i] == 'L') {
      cur_dir = (cur_dir + 3) % 4;
    } else {
      if (cur_dir == 0)
        y++;
      if (cur_dir == 1)
        x++;
      if (cur_dir == 3)
        x--;
      if (cur_dir == 2)
        y--;
    }
  }

  if ((x == 0 && y == 0) || cur_dir != 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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
