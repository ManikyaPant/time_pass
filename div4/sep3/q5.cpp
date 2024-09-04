/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


int sum_n(int l, int r) {

        int s=r*(r+1)/2- (l*(l-1)/2);
        return s;
}

void solve() {
  int n, k;
  cin >> n >> k;
  int ans = INF;
  int idx = 0;
  // for(int i=1;i<=n;i++) {
  //  int exp=i*k+i*(i-1)-k*(n-i)-n*(n-1)/2;
  //       if(abs(exp) < ans) {
  //       ans=abs(exp);
  //     idx=i;
  //}

  //}
  int l = k, r = n+k-1;
  while (l <= r) {
    int mid = (r + l) / 2;
    int s1 = sum_n(k,mid) ;
    int s2 =sum_n(mid+1,k+n-1);
                ans=min(ans, abs(s1-s2));
    if (s1 <= s2) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
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
