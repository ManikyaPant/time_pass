#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    mp[arr[i]]++;
  }
  priority_queue<int> heap;
  int wrong = 0;
  for (auto it : mp) {
    if (it.second > 1)
      heap.push(it.second); // We should try to rectify the max of numbers
    wrong += (it.second) * (it.second - 1) / 2;
  }
  int corrected = 0;

  // the number with max frequency should be corrected first , and we can always
  // change into a different number, since total distinct numbers will be less
  // than possible choices

  for (int i = 0; i < k; i++) {
    if (heap.empty())
      break;
    int top = heap.top();
    corrected += top - 1;
    heap.pop();
    heap.push(top - 1);
  }
  int total = (n * (n - 1)) / 2;
  cout << total - wrong + corrected << endl;
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
