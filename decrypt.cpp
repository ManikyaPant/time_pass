#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  string ans;
  char curr = s[0];
  for (int i = 1; i < n; i++) {
    if (s[i] != curr) {
      continue;
    } else {
      ans.push_back(curr);

      if (i != n - 1)
        i++;
      curr = s[i];
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
