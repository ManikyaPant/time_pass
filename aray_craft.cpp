/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n, x, y;
  cin >> n >> x >> y;
  int arr[n + 1];
  for (int i = y; i <= x; i++)
    arr[i] = 1;
  int c = 0;
  for (int i = y - 1; i >= 1; i--) {
    if (c % 2 == 0)
      arr[i] = -1;
    else {
      arr[i] = 1;
    }
    c++;
  }
  c = 0;
  for (int i = x + 1; i <= n; i++) {

    if (c % 2 == 0)
      arr[i] = -1;
    else
      arr[i] = 1;
    c++;
  }
        for(int i=1;i<=n;i++)
                cout << arr[i] << " ";
        cout << endl;
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
