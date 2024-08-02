/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void func(set<int> &st) {
  for (auto it : st)
    cout << it << " ";
  cout << endl;
}

void solve() {
  int n, x;
  cin >> x >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int ans = max(arr[0] - 0, x - arr[0]);
  set<int> st;
  st.insert(arr[0]);
  cout << ans << " ";
  for (int i = 1; i < n; i++) {
    st.insert(arr[i]);
    int d_r= x-arr[i];
                int d_l=arr[i];
                auto record=st.find(arr[i]);
                auto left=prev(record);
                auto right=next(record);
                if(right!=st.end())
                        d_r= *right - arr[i];
                if(record!=st.begin())
                        d_l=arr[i]-*left;
    //     cout << arr[i] << " " << d_l << " " << d_r << " " << endl;
    if (ans > max(d_r, d_l)) {
    } else {
      ans = max(d_l, d_r);
    }
  cout << ans << " ";
  }
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
