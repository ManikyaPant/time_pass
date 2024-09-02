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
  vector<int> arr(n, 0);
  for (auto &i : arr)
    cin >> i;
  string s;
  cin >> s;
  int l = 0, r = n - 1;
  vector<int> prefix(n + 1, 0);
  for (int i = 0; i < n; i++) {
    prefix[i + 1] += prefix[i] + arr[i];
  }
  int ans = 0;
  while (l < r) {
    while (l < n) {
      if (s[l] != 'L')
        l++;
      else
        break;
    }
    while (r >= 0) {
      if (s[r] != 'R')
        r--;
      else
        break;
    }
                if(l<r && l<n && r>=0)
    ans += prefix[r + 1] - prefix[l];
                l++;
                r--;
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
