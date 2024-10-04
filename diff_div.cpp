/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n, k,m;
        cin >> n >> k >> m;
        int arr[n];
        map <int,int>mp;
        for(int i=0;i<n;i++) {
           cin >> arr[i];
                mp[arr[i]%m]++;
        }
 for(auto it: mp) {
        if(it.second>=k) {
                 cout << "Yes" << endl;
                        int c=0;
                        for(int i=0;i<n;i++) {
                           if(arr[i]%m==it.first && c<k) {
                                        cout << arr[i] << " ";
                                        c++;
                                }
                                }
                        cout << endl;

                        return;
                }
        }
        cout << "No" << endl;

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1;
 while(t--) {
solve();
}
return 0;
}
