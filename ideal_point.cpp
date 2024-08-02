#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n, k;
  cin >> n >> k;
  bool f1 = false, f2 = false;
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    if (l == k)
      f1 = true;
    if (r == k)
      f2 = true;
  }
  if (f1 == true && f2 == true)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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
