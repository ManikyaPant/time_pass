/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n;
        cin >> n;
        int arr[n];
        int sum=0;
        for(auto &it:arr) {
        cin >> it;
           sum+=it;
        }
        sort(arr,arr+n);
        if(n==1 || n==2) {
          cout << -1 << endl;
                return;
        }
        int ans=-1;
        int l=0,r=INF;
        while(l<=r) {
           int mid=l+(r-l)/2;
//               cout << 2*n*arr[n/2] << " " << sum+mid << endl;
                if((2*n*arr[(n/2)]) < (sum+mid)) {
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
