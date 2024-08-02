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
  int arr[2 * n];
  n = n * 2;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr, arr + n);
  int ans = INF;

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int un = 0;
      int ind = 0;
      for (int k = 0; k < n; k++) {
        if (k!= i && k != j) {
          if (ind % 2 == 0)
            un -= arr[k];
          else
            un += arr[k];

          ind++;
        }
      }
//           cout << i << " " << j << " " << un << endl;
      ans = min(ans, un);
    }
  }
  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
