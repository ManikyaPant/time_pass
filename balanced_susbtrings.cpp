#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {

  int n;
  cin >> n;
  int M = 0;
  vector<int> arr(n);
  vector<int> balance(n, 0);
  int c1 = 0, c0 = 0;
  vector<int> pos;
  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;
    arr[i] = c - '0';
  }
  map<int, vector<int>> mp;
  mp[0].push_back(-1);
  for (int i = 0; i < n; i++) {
    if (arr[i] == 1) {
      c1++;
    } else {
      c0++;
    }
    if (mp.find(c1 - c0) != mp.end()) {
      M = max(M, i - (mp[c1 - c0][0]));
    }

    mp[c1 - c0].push_back(i);
  }
  cout << M << endl;
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
