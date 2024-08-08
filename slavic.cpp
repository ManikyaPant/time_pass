/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  string t, s;
  cin >> t >> s;
  int n = s.length();
  int ptr = 0;
  for (int i = 0; i < n; i++) {
    char c = s[i];
    bool flag = false;
    while (ptr < t.length()) {
      if (t[ptr] == '?' || t[ptr] == c) {
        if (t[ptr] == '?')
          t[ptr] = c;
        flag = true;
                                ptr++;
        break;
      }
      ptr++;
    }
    if (!flag) {
      cout << "NO" << endl;
      return;
    }
  }
        for(auto &it:t) {
         if(it=='?')
                        it='a';
        }
        cout << "YES" << endl << t << endl;
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
