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
  multiset<int> st;
 cout << (1 << n) << endl;
  for (int i = 0; i < (1 << n); i++)
    cin >> arr[i];
  sort(arr, arr + (1 << n));
  vector<int> ans;
  ans.push_back(arr[1]); // the first two elements of the sorted subarray should
                         // be the first two elemnts pf the answer
  ans.push_back(arr[2]);
  int index = 3;
  while (true && index < (1<<n)) {
    int sum = 0;
    for (int i = 0; i < ans.size(); i++) {
      sum += ans[i];
    }
    if (arr[index] == sum)
      index++;
    else
      ans.push_back(arr[index]);
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
