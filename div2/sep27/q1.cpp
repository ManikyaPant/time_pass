/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n;
  cin >> n;
  int c = 0;
  int ans = 0;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
int a1=0;
int m=-INF;
for(int i=0;i<n;i+=2) {
a1++;
m=max(m,arr[i]);
        }
a1=a1+m;
m=0;
        int a2=0;
for(int i=1;i<n;i+=2) {
    a2++;
        m=max(m,arr[i]);
        }
a2=a2+m;
        cout << max(a2,a1) << endl;
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
