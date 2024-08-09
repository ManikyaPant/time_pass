/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
//#define int long long
const int MOD =1e9+7;
//const int INF=LLONG_MAX >>1;

bool ok(int n,int m,int mid ,int *brr, vector <pair <int,int>> & segment) {
        vector <int> arr(n,0);

        for(int i=0;i<=mid;i++) {
        arr[brr[i]-1]=1;
        }
       vector <int> prefix(n+1,0);
        for(int i=0;i<n;i++) {
          prefix[i+1]=prefix[i]+arr[i];
        }
        for(int i=0;i<m;i++) {
               int l=segment[i].first;
                int r=segment[i].second;
                int sum= prefix[r]-prefix[l-1];
                int num= r-l+1; 
                if(2*sum > num){
                        return true;
                }
        }
        return false;
}

void solve() {
int n,m;
        cin >> n >> m;
        vector <pair <int,int>> seg(m);
        for(int i=0;i<m;i++) {
           cin >> seg[i].first>> seg[i].second;
        }
        int q;
        cin >> q;
        int query[q];
        for(int i=0;i<q;i++)
                cin >> query[i];
        int l=0,r=q-1;
        int ans=-1;
        while(l<=r) {
         int mid= (l+r)/2;
                if(ok(n,m,mid,query,seg)) {
                     ans=mid;
                        r=mid-1;
                }
                else {
                        l=mid+1;
                }
        }
        if(ans==-1)
                cout << ans << endl;
        else
        cout << ans+1 << endl;

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
