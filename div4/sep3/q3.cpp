/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {

  int x, y, k,ans;
  cin >> x >> y >> k;
  int moves_x = (x + k - 1) / k;
  int moves_y = (y + k - 1) / k;
 ans=2*max(moves_x,moves_y);
  if (moves_x > moves_y){
       
    cout << ans - 1 << endl;
        }
  else
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
