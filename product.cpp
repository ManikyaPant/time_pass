/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
const int MOD =1e9+7 ;
const int INF=LLONG_MAX >>1;

bool ok(int mid,int* arr,int t,int n) {
    int prod=0;
        for(int i=0;i<n;i++) {
              prod+= mid/arr[i];
        }
        if(prod >=t)
                return true;
        return false;

}

int func(int *arr,int l,int r,int t,int n) {
       int mid,ans=-1;
        while(l<=r) {
              mid=l+(r-l)/2;
                if(ok(mid,arr,t,n)) {
                 ans=mid;
                        r=mid-1;
                }
                else {
                l=mid+1;
                }
        }
        return ans;
}

void solve() {
int n,t;
        cin >> n >> t;
        int arr[n];
        int rb=INF;
        for(int i=0;i<n;i++) {
                cin >> arr[i];
         rb=min(rb,arr[i]);
        }
        int lb=0;
        int ans=func(arr,lb,rb*t,t,n);
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
