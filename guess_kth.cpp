/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;


int ok(int mid,int &k,int l) {
    cout << '?' << " " << l+1 << " " << mid+1 << endl;
    int num;
        cin >> num;
        if(mid-l-num+1 < k) {
                k=k-(mid-l-num+1);
                return 0;
        }
        else {
        return 1;
        }
}


void solve() {
int n,k;
        cin >> n >> k;
        cin >> k;
        int l=0,r=n-1;
        int ans=-1;
        while(l<=r) {
          int mid= l+(r-l)/2;
                if( ok(mid,k,l)==0) {
                   l=mid+1;
                }
                else {
                   r=mid-1;
                   ans=mid;
                }
        }
        cout << "! " << ans+1 << endl;

}

signed main() {
 
 int t=1;
 while(t--) {
solve();
}
return 0;
}
