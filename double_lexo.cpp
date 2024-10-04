/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
#include <pthread.h>
#include <vector>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void py(vector<char> s) {
  for (auto it : s)
    cout << it;
  cout << endl;
}

void solve() {
  string s;
  cin >> s;
  map<char, int> mp;
  for (int i = 0; i < s.length(); i++) {
    mp[s[i]]++;
  }
  int n = s.length();
  vector<char> ans(s.length());
  vector<char> rev(s.length());
  bool order = false;
  int l = 0, r = n - 1;
  for (auto it : mp) {
    if (!order) {
      if (it.second % 2 == 0) {
        for (int i = 0; i < it.second; i += 2) {
          ans[l++] = it.first;
          ans[r--] = it.first;
        }
      }
      if (it.second % 2 == 1) {
        for (int i = 0; i < it.second - 1; i += 2) {
          ans[l++] = it.first;
          ans[r--] = it.first;
        }
        ans[l++] = it.first;
        order = true;
      }
    } else if (order) {
      for (int i = 0; i < it.second; i++)
        ans[r--] = it.first;
    }
  }
  for (int i = 0; i < n; i++) {
    rev[i] = ans[n - i - 1];
  }
  if (rev > ans)
    py(rev);
  else
    py(ans);
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
