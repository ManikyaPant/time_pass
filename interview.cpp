/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool ok(int mid, vector<int> &pre, int l) {
  cout << "? " << mid - l + 1 << " ";
  for (int i = l; i <= mid; i++) {
    cout << i + 1 << " ";
  }
  cout << endl;
  int num;
  cin >> num;
  if (num == pre[mid + 1] - pre[l])
    return 0;
  return 1;
}

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  vector<int> pre(n + 1, 0);

  for (int i = 1; i <= n; i++) {
    pre[i] = pre[i - 1] + arr[i - 1];
  }
  int l = 0, r = n - 1, ans = -1;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (ok(mid, pre, l) == 0) {
      l = mid + 1;
    } else {
      r = mid - 1;

      ans = mid;
    }
  }
  cout << "! " << ans + 1 << endl;
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
