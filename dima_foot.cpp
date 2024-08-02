/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int a1,b1,a2,b2;
        cin >> a1 >> b1 >> a2 >> b2;

        if(a1 < b1 && a2 > b2) {
                cout << "NO" << endl;
          return;
        }
        if(b1 < a1 && b2 > a2) {
                cout << "NO" << endl;
         return;
        }

        else
         cout << "YES" << endl;;

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1;
cin >> t;
 while(t--) {
solve();
}
return 0;
}
