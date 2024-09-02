/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool ok(int mid, int *city, int *tower, int n, int m) {
  int r = mid;
  int i = 0;
  int index = 0;
  bool flag = true;
  while (i < n) {
    if (tower[index] - r <= city[i] && tower[index] + r >= city[i]) {
      i++;
    } else {
      index++;
      if (index == m) {
        flag = false;
      }
    }
  }
  return flag;
}

void solve() {
  int n, m;
  cin >> n >> m;
  int city[n];
  int tower[m];
  for (auto &it : city)
    cin >> it;
  for (auto &it : tower)
    cin >> it;
  int l = 0, r = 2e9 + 1, ans = -1, mid;
  while (l <= r) {
    mid = l + (r - l) / 2;
    if (ok(mid, city, tower, n, m)) {
      ans = mid;
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }
   cout << ans << endl;
        //just binary search on r and get the minimum one
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
