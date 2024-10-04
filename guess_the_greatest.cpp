/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n;
  cin >> n;
  int l = 1, r = n, val, val1, val2;
  int ans = -1;
  while (l < r) {
    int mid = l + (r - l) / 2;
    cout << "? " << l << " " << r << endl;
    cout.flush();
    cin >> val;

    cout << "? " << l << " " << mid << endl;
    cout.flush();
    cin >> val1;
    if (val == val1) {
      r = mid  ;
      ans = mid;
    } else {
      l = mid;
    }
  }
  cout << "! " << ans << endl;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int t = 1;
  while (t--) {
    solve();
  }
  return 0;
}
