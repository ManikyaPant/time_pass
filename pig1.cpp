#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int l,r;
cin   >> l >> r;
int p1=0,p2=0;
for(int i=31;i>=0;i--) {
    if((l>>i)&(1)==1) {
        p1=i;
        break;
    }
}
for(int i=31;i>=0;i--) {
    if((r>>i)&(1)==1) {
        p2=i;
        break;
    }
}
// cout  << p1 << " " << p2 << endl;
int p=max(p1,p2);

cout << p << endl;

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t; cin >> t;
 while(t--) {
solve();
}
return 0;
}
