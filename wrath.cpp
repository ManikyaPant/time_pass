/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// indirectly we are given intervals on a number line we need to check how many
// points are not covered.

void solve() {

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  vector<int> visited(n, 0);
  int b = n - 1;
  int ans = 0;
  for (int i = n - 1; i >= 0; i--) {
    if (i < b) {
      ans += b - i;
       b=min(b,max(i-arr[i],0LL));
    } else {
      b = min(b,max(i-arr[i], 0ll));
    }
  }
  cout << ans+1 << endl;
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
