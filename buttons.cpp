#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {

int n;
cin >> n;
bool u=false,r=false,d=false,l=false;

for(int i=0;i<n;i++) {
    int a,b;
    cin >> a >> b;
    
    if(b>0)
    u=true;

    if(b<0) {
    d=true;
    }

    if(a>0)
    r=true;

    if(a<0)
    l=true;
    
}
     if(u&&r&&d&&l){
        cout << "NO" << endl;
     }
     else {
        cout << "YES" << endl;
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