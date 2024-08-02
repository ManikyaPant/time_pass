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
  string s;
  cin >> s;
  int ans = 0;
  set<int> st;
  for (int i = 0; i < n; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
                        int distinct= st.size();
      ans = max(ans,distinct);
      st.clear();
      continue;
    }
    st.insert(s[i]);
  }
        int lenght=st.size();
        ans=max(ans,lenght);
        cout << ans << endl;
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
