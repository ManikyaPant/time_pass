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
        cin >> arr[0];
        bool flag=false;
        for(int i=1;i<n;i++) {
                cin >> arr[i];
                if(arr[i] >= arr[i-1])
                        flag=true;
        }
        if(flag)
                cout << "YES" << endl;
        else
         cout << "NO" << endl;

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
