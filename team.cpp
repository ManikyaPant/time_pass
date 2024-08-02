/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n, m;
  cin >> n >> m;

  if (m >= n && 2 * n >= m) {
    int a = m - n;
    int b = 2 * n - m;

    for (int i = 0; i < a; i++) {
      cout << "110";
    }
    for (int i = 0; i < b; i++)
      cout << "10";
    cout << endl;
  } else if (m >= n + 1 && 2 * n + 1 >= m) {
    int a = m - n - 1;
    int b = 2 * n + 1 - m;
    for (int i = 0; i < a; i++) {
      cout << "110";
    }
    for (int i = 0; i < b; i++)
      cout << "10";
    cout << "1"<< endl;

  } else if (m >= n + 2 && 2 * n + 2 >= m) {
    int a = m - n - 2;
    int b = 2 * n + 2 - m;
    for (int i = 0; i < a; i++) {
      cout << "110";
    }
    for (int i = 0; i < b; i++)
      cout << "10";
    cout <<"11" << endl;
  }

  else {

    cout << -1 << endl;
  }
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
