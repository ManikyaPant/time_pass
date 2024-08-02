#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  int ans = 0;
  vector<int> a(n);
  vector<int> b(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    ans += a[i];
  }
  for (int i = 0; i < m; i++)
    cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  if (k % 2 == 1) {
    if (a[0] <= b[m - 1])
      cout << ans - a[0] + b[m - 1] << endl;
    else if(k!=1 && a[0] > b[m-1])
      cout << ans - a[n - 1] + b[0] << endl;
  }
         if (k % 2 == 0 || (k==1 && a[0]> b[m-1])) {
    cout << ans << endl;
  }
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
