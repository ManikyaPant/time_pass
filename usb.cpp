/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool cmp(pair<int, string> a, pair<int, string> b) { return a.first < b.first; }

void solve() {
  string t1 = "USB";
  string t2 = "PS/2";
  int a, b, c;
  cin >> a >> b >> c;
  int m;
  cin >> m;
  vector<pair<int, string>> arr(m);
  for (int i = 0; i < m; i++) {
    cin >> arr[i].first;
    cin >> arr[i].second;
  }
  sort(arr.begin(), arr.end(), cmp);
        
  int ans = 0;
  int equipped = 0;
  for (int i = 0; i < m; i++) {
    if (arr[i].second == t1) {
      equipped++;
      ans += arr[i].first;
      if (a > 0)
        a--;
      else if (c > 0)
        c--;
      else {
        ans -= arr[i].first;
        equipped--;
      }
    }
    if (arr[i].second == t2) {
      equipped++;
      ans += arr[i].first;
      if (b > 0)
        b--;
      else if (c > 0)
        c--;
      else {
        equipped--;
        ans -= arr[i].first;
      }
    }
  }
  cout <<equipped << " " <<ans << endl;
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
