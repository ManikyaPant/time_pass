/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n,m;
        cin >> n >>  m;
        if(n==1) {
         cout << 1 << endl;
                return;
        }
        if( (n)/2 >=m)
                cout << m+1 << endl;
        else
         cout << m-1 << endl;

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1;
 while(t--) {
solve();
}
return 0;
}
