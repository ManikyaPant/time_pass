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
        string s;
        cin >> s;
        if(n<=2) {
         cout << s << endl;
                return;
        }
        int ans= min(s[0]-48+s[1]-48,(s[0]-48) * (s[1]-48));
        for(int i=2;i<n;i++) {
                int val= s[i]-'0'; 
                if(ans >1) {
                    ans+=val;
                }
                else {
                ans*=val;
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
