#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define M 998244353
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  string s;
  int n;
  cin >> n;
  cin >> s;
  char c_beg = s[0];
  char c_end = s[n - 1];
  int lb = 1, lc = 1;
  for (int i = 1; i < n; i++) {
    if (s[i] == s[0])
      lb++;
    else
      break;
  }
  for (int i = n - 2; i >= 0; i--) {
    if (s[i] == s[n - 1])
      lc++;
    else
      break;
  }
        if(c_beg==c_end) {
                int ans= (lb%M+lc%M+1)%M;
                int op= (lb%M * lc%M)%M;
                cout << (ans%M+op%M)%M << endl;
        }
        else 
{
        int ans= (lb%M+lc%M+1)%M;
                cout << ans << endl;
        }
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
