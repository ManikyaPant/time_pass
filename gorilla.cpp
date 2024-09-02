/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int cmp(int a, int b) { return a > b; }
void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  priority_queue<int> heap;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      int x_count = max(0LL, min(n - k + 1, i) - max(1LL, i - k + 1) + 1);
      int y_count = max(0LL, min(m - k + 1, j) - max(1LL, j - k + 1) + 1);
      int val =
          x_count * y_count; // cout << val << " " << i << " " << j  << endl;
      heap.push(val);
    }
  }
  int l;
  cin >> l;
  int arr[l];
  for (int i = 0; i < l; i++)
    cin >> arr[i];
  sort(arr, arr + l, cmp);
  int ans = 0;
  for (int i = 0; i < l; i++) {
    ans += arr[i] * heap.top();
    heap.pop();
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
