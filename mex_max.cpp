/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// if mex < max we can't add new number
// and for mex > max we will add k new numbers since set will be of the form
// 0,1,2,3,4,... mex !=max
void solve() {
  int n, k;
  cin >> n >> k;
  set<int> st;
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    st.insert(val);
  }
  int max = *(--st.end());
  int mex;
  int index = 0;
  for (auto it : st) {
    if ((it) != index) {
      mex = index;
      break;
    }
    index++;
  }
        mex=index;
  if (mex < max) {
    int val = (max + mex - 1) / 2 + 1;
    if (st.find(val) == st.end() && k)
      cout << st.size() + 1 << endl;
    else
      cout << st.size() << endl;
  } else
    cout << st.size() + k << endl;
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
