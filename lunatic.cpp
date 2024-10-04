/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

void solve() {
  int n;
  cin >> n;
  int arr[n];
  for (auto &it : arr)
    cin >> it;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans = gcd(abs(arr[i] - arr[n - i - 1]), ans);
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
