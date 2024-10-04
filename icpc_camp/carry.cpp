/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int carry(int a, int b) {
  if (b > a)
    swap(a, b);
  int c = 0, ans = 0;
        int place=10;
  while (a != 0) {
    int val = 0;
    val = b % 10 + a % 10 + c;
    if (val > 9) {
      c = val / 10;
      ans++;
    } else {
      c = 0;
    }
    b = b /10 ;
    a = a /10 ;
                place=place*10;
  }
   return ans;              //  cout << a%10 <<   " " << c <<" yes" << endl;
  }

void solve() {

  int ans=0;
  int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++) {
          cin >> arr[i];
        }
        sort(arr,arr+n);
        int sum=0;
        for(int i=0;i<n;i++) {
             ans+=carry(arr[i],sum);
                sum+=arr[i];
               // cout << sum << " " << ans << endl;
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
