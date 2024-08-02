#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  string s;
  cin >> s;
  int n = s.length();
  int a = -1, b = -1;
  if (s[0] == 'a')
    a = 0;
  else
    b = 0;
  int p = 0, l = 0, flag = 0;
  for (int i = 1; i < n; i++) {
    if (s[i - 1] == 'b') {
      flag++;
    }
    if (s[i] == 'a' && s[i - 1] == 'a') {

    } else if (s[i] == 'b' && s[i - 1] == 'b') {
    } else if (s[i] == 'a' && s[i - 1] == 'b') {
      a = i;
    } else if (s[i] == 'b' && s[i - 1] == 'a') {
      if (flag) {
        a = i;
        p = a;
      }
    }
      l = max(l, i - p+1);
//      cout << "length:" << l << endl;
}
        cout << l << endl;
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
