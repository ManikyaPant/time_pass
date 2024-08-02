/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
set<int> s1;
set<int> s2;
set<int> s3;


void solve() {
  int n;
  cin >> n;
  int arr[n][6];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 6; j++) {
      int val;
      cin >> arr[i][j];
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 6; j++) {
        int e1 = arr[i][j];
        if (n == 1) {
          s1.insert(e1);
        }

        else {
          int e2;
          for (int k = 0; k < n; k++) {
            for (int l = 0; l < 6; l++) {
              e2 = arr[k][l];
              if (k != i && l != j) {
                if (n == 2)
                  s1.insert(e2 * 10 + e1);
                else {
                  int e3;
                  for (int m = 0; m < n; m++) {
                    for (int o = 0; o < 6; o++) {

                      int e3 = arr[m][o];
                      if ((m == i && o == j) || (m == k && o == l)) {
                      } else {
                        s1.insert(e3 * 100 + e2 * 10 + e1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
        int ans=-1;
    for(int i=1; i <=999;i++) {
              if(n==1 && i>=9) {
                        cout << ans << endl;
                     break;
                }
                if(n==2 && i>=99) {
                    cout << ans << endl;
                        break;
                }
                if(n==3 && i>=999) {
                        cout << ans << endl;
                     break;
                }
                if(s1.find(i)==s1.end()) {
                        cout << ans << endl;
                        return;
                }
                else {
                ans=i;
                }
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
