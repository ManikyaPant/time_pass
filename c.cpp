/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n, q;
  cin >> n >> q;
  int arr[n + 1];
  string s1, s2;
  cin >> s1 >> s2;
  arr[0] = 0;
  map<char, int> mp;
  for (int i = 0; i < n; i++) {
    if (mp.find(s1[i]) == mp.end()) {
      if (s1[i] != s2[i]) {
        arr[i + 1] = arr[i] + 1;
        mp[s2[i]]++;
      } else {
        arr[i + 1] = arr[i];
      }
    } else {
      if (mp[s1[i]] == 1) {
        mp.erase(s1[i]);
      } else {
        mp[s1[i]]--;
      }
      arr[i + 1] = arr[i] - 1;
    }
  }
        for(auto it: arr)
       cout << it << " " ;
        cout << endl;
  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    cout << abs(arr[r] - arr[l-1] )<< endl;
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
