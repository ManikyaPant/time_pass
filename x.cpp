/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int a,b,c;
int ans=INF;
        cin >> a >> b >> c;
        for(int i=1;i<=10;i++) 
                ans= min(ans, abs(i-a)+abs(i-b)+abs(i-c));
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
