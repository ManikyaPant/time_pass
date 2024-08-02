#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n, k;
  cin >> n >> k;
  int arr[n + 1];
  int pair_count = 0; // count no. of items that cannot be sorted
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
    if (abs(i-arr[i])%k!=0)      //only these numbers cannot be sorted and they exist in a pair
      pair_count++;
  }
  if (pair_count == 0)
    cout << 0 << endl;
  else if (pair_count == 2)
    cout << 1 << endl;
  else if (pair_count > 2)
    cout << -1 << endl;
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
