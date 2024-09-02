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
        for(int i=0;i<n;i++)
                cin >> arr[i];
        int temp=arr[0];
        for(int i=0;i<n-1;i++) {
             arr[i]=arr[i+1];
        }
        arr[n-1]=temp;

        for(auto it: arr)
        cout << it << " ";
        cout << endl;

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
