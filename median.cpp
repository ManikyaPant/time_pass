#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr, arr + n);
  int mid = (n - 1) / 2 + 1;
   mid=mid-1;
  int ans = 1;
  for (int i = mid + 1; i < n; i++) {
    if (arr[i] == arr[mid])
      ans++;
    else
      break;
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
