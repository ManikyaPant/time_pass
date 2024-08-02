#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {

int n;
cin >> n;
int cp=0,cn=0;
int val,ans=0;
for(int i=0;i<n;i++) {
    cin >> val;
    if(val==1)
    cp++;
    else
    cn++;
}
if(cp >=cn && cn%2==0 )
cout << 0 << endl;

if(cp >=cn && cn%2!=0)
cout << 1 << endl;

else if(cp < cn) {
    int a= cn-cp;
    int b=2;
    ans+= (a-1)/b+1;
    cn= cn-ans;
    if(cn%2==1)
    ans++;

cout << ans << endl;
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