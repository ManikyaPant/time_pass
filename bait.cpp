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
        map <int,int> mp;
        for(int i=0;i<n;i++) {
                int val;
                cin >> val;
                mp[val]++;
        }

        for(auto it: mp) {
            if(it.second%2==1) {
                 cout << "YES" << endl;
                        return;
                }
        }
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
