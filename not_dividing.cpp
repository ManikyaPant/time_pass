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
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = 1; i < n; i++) {
    if (arr[i] % arr[i - 1] == 0 && arr[i - 1] != 1)
      arr[i] += 1;
    if (arr[i - 1] == 1) {
      arr[i - 1]++;
      if (i != 1 && arr[i - 1] % arr[i - 2] == 0) {

        arr[i - 1]++;
      }
      if (arr[i] % arr[i - 1] == 0) {
        arr[i]++;
      }
    }
  }


for (auto it : arr)
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
