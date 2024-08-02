#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n;
  cin >> n;
  map<int, int> mp;
  vector<vector<int>> arr(n);
  vector<int> ans(n, -1);
  set<int> st;
  for (int i = 0; i < n; i++) {
    int m;
    cin >> m;
    for (int j = 0; j < m; j++) {
      int val;                                       //taking the input 
      cin >> val;
      arr[i].push_back(val);
    }
  }
  for (int i = 0; i < arr[n-1].size(); i++) {
    mp[arr[n - 1][i]]++;                           // storing the participants of last day
  }
  for (int i = n - 2; i >= 0; i--) {

    for (int j = 0; j < arr[i].size(); j++) {
      int val = arr[i][j];
      if (mp.find(val) == mp.end() && ans[i]==-1) {
        ans[i] = val;
        st.insert(val);
                        
      }
      mp[val]++;
    }
  }
  for (int i = 0; i < arr[n - 1].size(); i++) {
    if (st.find(arr[n - 1][i]) == st.end()) {
      ans[n-1] = arr[n - 1][i];
    }
  }

  int flag = 1;
  for (auto it : ans) {
    if (it == -1) {
      flag = 0;
      cout << -1 << endl;
      break;
    }
  }
  if (flag) {
    for (auto it : ans) {
      cout << it << " ";
    }
    cout << endl;
  }
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
