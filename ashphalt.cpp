#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {

int n,g,b;
cin >> n >> g >> b;

if(n <=g || n/2<=g) {
    cout << n << endl;
}
else if(n/2 > g) {
int k=0,ans=0;
if(n%2==0)
k=n/(2*g)-1;
else
k=n/(2*g);
// cout << k << endl;
ans=(g+b)*k;
// cout << ans << endl;
ans=ans+((n+2-1)/2-(k*g));
// cout << ans << endl;
if(k*b < n/2) {
   ans+=(n/2-k*b);
}
cout << ans << endl;
}

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t; cin >> t;
 while(t--) {
solve();
}
return 0;
}