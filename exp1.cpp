/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int binexp(int b, int c, int m) {
  int ans = 1;
  while (c != 0) {
    if (c & 1) {
      ans = ans * b;
      ans = ans % (m);
    }
    b = b * b;
    b = b % (m);
    c = c >> 1;
  }
  return ans % m;
}

void solve() {
  int a, b, c;
  cin >> a >> b; 
  
  int ans = binexp(a, b, MOD);
  ans = ans % MOD;
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
