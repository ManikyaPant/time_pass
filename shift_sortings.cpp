#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {

string s;
cin >> s;
int cl=0;
int ans=0;
for(auto c:s) {
    if(c-48==0 && cl==0) {
        continue;
    }
    if(c-48==1) {
        cl++;
    }
    if(c-48==0 && cl!=0) {
        ans+=cl+1;
    }
}
cout << ans << endl;
}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t; cin >> t;
 while(t--) {
solve();
}
return 0;
}