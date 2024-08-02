#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int a, b;
  cin >> a >> b;

  if (b == a) {
    cout << 1 << endl;
        return;
        }
  else if (b == a + 1) {
    cout << b% 10 << endl;
        return;
        }
  int n = b - a;
  int pro = 1;
  int pointer = 1;
  while (pointer <= n && pro != 0) {
    pro = pro * (b % 10);
    b--;
    pointer++;
                //cout << pro << endl;
    pro=pro%10;
  }
  cout << pro << endl;
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
