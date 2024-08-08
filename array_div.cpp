/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool ok(int val, int *arr, int k, int n) {
  int part = 0;
  int i = 0, s = 0;
  while (i < n) {
    if (s + arr[i] <= val) {
      s += arr[i];
      i++;
    } else {
      part++;
      s = 0;
    }
  }
         part++;
  if (part > k)
    return false;
  return true;
}

int func(int *arr, int k, int l, int r, int n) {
  int ans = -1;
  int mid = 0;
  while (l <= r) {
    mid = l + (r - l) / 2;
    if (ok(mid, arr, k, n)) {
      r = mid - 1;
      ans = mid;
    } else {
      l = mid + 1;
    }
  }
  return ans;
}

void solve() {
  int n, k, lb = -1, rb = 0;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    lb = max(lb, arr[i]);
    rb += arr[i];
  }
        int ans=func(arr,k,lb,rb,n);
        cout << ans << endl;
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
