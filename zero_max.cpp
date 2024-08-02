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
  int arr[n];
  int brr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = 0; i < n; i++)
    cin >> brr[i];
  map<pair<int, int>, int> mp;
  int inf = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      int num = gcd(arr[i], brr[i]);
      mp[{arr[i] / num, brr[i] / num}]++;

    } else if(brr[i]==0) {
      inf++;
    }
  }
        int m1=0;
  for(auto it: mp) {
   m1= max(m1, it.second);
        }

int ans=m1+inf;
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
