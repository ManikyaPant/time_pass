/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n,k;
        cin >> n >> k;
        if( k > n) {
                cout << n << endl;
        return; 
}
        if(k==1) {
          cout << n << endl;
                return;
        }
        int ans=0;
        while(n>0) {
          ans=ans+ n%k;
        n=n/k;
        }
        cout << ans << endl;

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
