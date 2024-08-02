/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int m,b;
        cin >> m >> b;
        int ans=0;       
        
                 int y=b/2;
                int x= m*(b-y);
                ans=(x*(y+1)*(x+1)) + (y*(y+1)*(x+1));
               if(y+1 <=b) {
                      y=y+1;
                      x= m*(b-y);
                        ans=max(ans,(x*(y+1)*(x+1)) + (y*(y+1)*(x+1)));

                }
cout << ans/2 << endl;
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
