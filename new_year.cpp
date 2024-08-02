/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
 unsigned int n, k;
  cin >> n >> k;
  int po = 0;
  if (k == 1) {
    cout << n << endl;
    return;
  } else
    for (int i = 63; i >= 0; i--) {
      if (((n >> i) & 1) == 1) {
        po = i;
        break;
      }
    }
  cout << (1LL << (po + 1)) - 1 << endl;
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
