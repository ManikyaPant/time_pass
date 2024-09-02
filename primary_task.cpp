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
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s[0] == '1' && s.size() >= 3 && s[1] == '0') {
      if (s[2] >= '2')
        cout << "Yes" << endl;
      else if (s[2] == '1' && s.size() >= 4)
        cout << "Yes" << endl;
      else
        cout << "No" << endl;
    } else
      cout << "No" << endl;
  }
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
