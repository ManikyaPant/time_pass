/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n,a,b;
        cin >> n >> a >> b;

        int k = min(b-a+1,n);
        if(k<=0)
                k=0;
        int profit= (b+1)*k - k*(k+1)/2+ (n-k)*a;
        cout << profit << endl;

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
