/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

bool ok(int val,int n) {
      int cnt=0;
        for(int i=1;i<=n;i++) {
               cnt+= min(n,val/i);
        }
        if(cnt >=(n*n)/2+1)
                return true;
        return false;
}

void solve() {
int n ;
        cin >> n;
int l=1,r=n*n+1;
int ans=-1,mid;
        while(l<=r) {
               mid=l+(r-l)/2;
                if(ok(mid,n)) {
                 ans=mid;
                        r=mid-1;
                }
                else {
                l=mid+1;
                }
        }
        cout << ans << endl;

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1;
 while(t--) {
solve();
}
return 0;
}
