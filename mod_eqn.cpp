/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int a, b;
        cin >> a >> b;
        if(a==b) {
        cout << "infinity" << endl;
                return;
        }
int x=a-b;
int ans=0;
        for(int i=1;i*i<=x;i++) {
               if(x%i==0) {
                        if(i>b)
                ans++;
                        if(x/i >b )
                                ans++;
                    if(x/i >b && i >b && i==x/i)
                                ans--;
                }

        }
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
