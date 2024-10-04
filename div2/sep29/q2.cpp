/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

int root(int x) {
if(x==0 || x==1)
                return x;
        int l=1,r=x/2;
        int ans=0;
        while(l<=r) {
          int mid=l+(r-l)/2;
                if(mid*mid ==x)
                        return mid;
                if(mid*mid <x){
                        l=mid+1;
                        ans=mid;
                }
                else {
                r=mid-1;
                }
                
        }
        return ans;
}
int ok(int n,int k ) {
        int ans=0;
        int res=sqrt(n);
        while(res * res >n) 
                res--;
        while((res+1)*(res+1) <=n)
                res++;
        if(n-res>=k)
                return 1;
        return 0;
if(n-root(n)>=k)
                return 1;
        return 0;
}

void solve() {
int k;
        cin >> k;

        int l=1;
        int r=2e18;
        int ans=0;
        while(l<=r) {
           int mid= l+(r-l)/2;
                if(ok(mid,k)) {
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
cin >> t;
 while(t--) {
solve();
}
return 0;
}
