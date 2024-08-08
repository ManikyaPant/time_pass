/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n;
  cin >> n;
  int arr[n], brr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];

    brr[i] = arr[i];
    if (i != 0)
      brr[i] += brr[i - 1];
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int v;
    cin >> v;
    int l = 0, r = n - 1;
    int ans = -1;
    while (l <= r) {
      int mid = (l + r) / 2;
      if (brr[mid] >= v) {
        ans = mid;
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    cout << ans+1 << endl;
  }
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
