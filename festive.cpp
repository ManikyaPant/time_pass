/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  set<char> st;
  map<char, int> mp;
  for (auto it : s) {
    mp[it]++;
  }
  bool flag = false;
  for (int i = 0; i < n; i++) {
    st.insert(s[i]);
    int size = st.size();
                if (size > k) {
      flag = true;
      break;
    }

    mp[s[i]]--;
    if (mp[s[i]] == 0) {
      mp.erase(s[i]);
      st.erase(s[i]);
    }
      }
  if (flag) {
    cout << "YES" << endl;
  } else
    cout << "NO" << endl;
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
