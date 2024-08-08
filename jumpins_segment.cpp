/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

bool ok(int mid, vector <pair <int,int>>&arr,int n) {
        bool flag=false;
        int l=0,r=0;
        for(int i=0;i<n;i++) {
                 int myl=l-mid;
                int myr=l+mid;

                if(arr[i].first >=myl && arr[i].second <=myr) {
                        l=arr[i].first;
                        r=arr[i].second;
                        
                }
                else {
                return false;
                }
        }
        return true;
}

void solve() {
int n;
        cin >> n;
        vector <pair <int,int>> arr(n);
        for(auto it: arr)
        cin >> it.first >> it.second;

        int l=0,r=1e8;
         int ans=0;
        while(l<=r) {
              int mid=l+(r-l)/2;
                if(ok(mid,arr,n )) {
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
