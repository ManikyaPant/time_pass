/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n, k;
  cin >> n >> k;
  if (k == 1) {
    cout << "No" << endl;
    return;
  }
  if (n == 1) {
    cout << "Yes" << endl;
    return;
  }
  if (n % 2 == 0) {
    if (k % 2 == 1 && k < n / 2)
      cout << "NO" << endl;
    else {
      cout << "YES" << endl;
    }
  }
  if (n % 2 == 1) {
    if (k % 2 == 1 && k <= n / 2)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
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
