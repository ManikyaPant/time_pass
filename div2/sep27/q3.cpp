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
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  int size = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] != arr[i - 1]) {
      if (k >= i * (arr[i] - arr[i - 1])) {
        size = arr[i];
        k = k - i * (arr[i] - arr[i - 1]);
      } else {
        if (k >= i) {
          size += k / i;
          k = k - i * (k / i);
        }
      }
    }
  }
  cout << size << endl;
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
