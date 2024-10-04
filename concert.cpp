/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

void solve() {
  int a, b, l, r;
  cin >> a >> b >> l >> r;
  int gc = gcd(a, b);
  int lcm = (a * b) / gc;
   int ans= (r/lcm )- (l/lcm);
        if(r%lcm==0 && l%lcm==0)
                ans++;
  cout << ans << endl;
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
