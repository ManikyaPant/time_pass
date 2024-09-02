/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n, 0);

  cout << '?' << " " << 1 << " " << n << endl;
  int val;
  cin >> val;
        int ts=val;
  for (int i = n - 1; i >= 2; i--) {

    cout << '?' << " " << 1 << " " << i << endl;
    int in;
    cin >> in;
    arr[i] = val - in;
    val = in;
  }
        cout << '?'<< " " << 2 << " " << n << endl;
        cin >> val;
        arr[0]=ts-val;
    int s=0;
        for(int i=2;i<n;i++)
                s+=arr[i];
        arr[1]=ts-s-arr[0];
        cout << '!' << " ";
        for(auto it:arr) {
         cout << it << " ";
        }
        cout << endl;
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
