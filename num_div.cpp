/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n = 1e6;
  vector<int> spf(n + 1, 1);
  
void solve() {
  
int val;
        cin >> val;
        int ans=1;

        while(val!=1) {
          int c=0;
          int x=spf[val];
          c++;
           val=val/x;
          while(spf[val]==x) {
                 c++;
                val=val/x;
                }
          
          ans=ans*(c+1);
        }
        cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int t = 1;
  cin >> t;
        for (int i = 2; i <= n; i++)
    spf[i] = i;
  for (int i = 2; i <= n; i++) {
                if(spf[i]==i) {
    for (int j = i * i; j <= n; j = j + i) {
      if (spf[j] == j)
        spf[j] =i; 
    }
                }
  }
  while (t--) {
    solve();
  }
  return 0;
}
