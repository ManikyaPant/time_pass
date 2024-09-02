/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int x, y, k;
  cin >> x >> y >> k;
  vector<int> arr(k, 0);
  vector<int> brr(k, 0);

  for (int i = 0; i < k - 1; i++) {
    arr[i] = i + 1;
  }
  arr[k - 1] = k * x - (k * (k - 1)) / 2;
  if (!y)
    brr[k - 1] = k*y;
  else {
    if (k == 1)
      brr[k - 1] = y;
    else {
      brr[k - 2] = 1;
      brr[k - 1] = k*y - 1;
    }
  }
  for (int i = 0; i < k; i++)
    cout << arr[i] << " " << brr[i] << endl;
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
