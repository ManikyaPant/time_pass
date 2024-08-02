/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n, m;
  cin >> n >> m;
  string s;
  string t;
  cin >> s >> t;
  int ans = INF;
  int index = 0;

  for (int i = 0; i < m - n+1; i++) {
    int c = 0;
    for (int j = 0; j < n; j++) {
      if (s[j] != t[i + j]) {
        c++;
      }
    }
    if (c < ans) {
      ans = c;
      index = i;
    }
  }
        cout << ans << endl;
        for(int i=0;i<n;i++) {
               if(s[i]!=t[i+index])
                        cout << i +1 << " "  ;
        }
        cout << endl;
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
