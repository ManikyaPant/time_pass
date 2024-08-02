#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {

int a,b,c,d;
cin >> a >> b >> c >> d;
int ans=0;
ans+=a;                   //first of all raise the mood as far ( greedy)
if(a==0)
cout << 1 << endl;
else {
    cout << a + min(b,c) + min(b,c) + min(a+1,abs(b-c)+d) << endl;
}
}





signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1; cin >> t;
 while(t--) {
solve();
}
return 0;
}