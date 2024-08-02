#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n;
  cin >> n;
  int arr[n];
  int ans1[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  ans1[0] = -1;
  int poss_ans = 0;
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[poss_ans]) {
      ans1[i] = poss_ans;
    } else {
      ans1[i] = -1;
      poss_ans = i;
    }
  }
  int ans2[n];
  ans2[n - 1] = n;
  poss_ans = n - 1;
  for (int i = n - 2; i >= 0; i--) {
    if (arr[i] < arr[poss_ans])
      ans2[i] = poss_ans;
    else {
      ans2[i] = n;
      poss_ans = i;
    }
  }


int ans = -0;
for (int i = 0; i < n; i++) {
  int l = ans1[i];
  int r = ans2[i];
  if (l == -1 || r == n)
    continue;
  ans += (min(arr[l], arr[r]) - arr[i]);


}
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
