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
  int prev = 0;
  int c = 0;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  prev = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] < prev) {
      c++;
    } else {
      c=1;
      prev = arr[i];
    }
    if (c == k) {
      cout << prev << endl;
      return;
    }
  }
  sort(arr, arr + n);
  cout << arr[n - 1] << endl;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int t = 1;
  //  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
