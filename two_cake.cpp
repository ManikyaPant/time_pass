/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n,a,b;
        cin >> n >> a >> b;
        if(n==a+b) {
                cout << 1 << endl;
        }
        else {
                int ans=-INF;
                 for(int i=1;i<=n-1;i++) {
                      ans=max(ans,min(a/i, b/(n-i)));
                }
                cout << ans << endl;
        }

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1;
//cin >> t;
 while(t--) {
solve();
}
return 0;
}
