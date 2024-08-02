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
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int num = 1;
  for (int i = 0; i < n; i++) {
    int ans = gcd(num, arr[i]);
    int op = num * arr[i];
    num = op / ans;
  }
  vector<int> ans(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    ans[i] = num / arr[i];
    sum += ans[i];
  }
  if (sum >= num) {
    cout << -1 << endl;
                return;
        }
  else
    for (auto it : ans)
      cout << it << " ";
  cout << endl;
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
