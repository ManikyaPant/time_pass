#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

int fact(int n) {
    if(n==1 || n==0)
    return n;

    else
    return ((n%MOD)*fact(n-1))%MOD;
}

void solve() {
int n;
cin >> n;
int ans=fact(n);
int v1= (n%MOD * (n-1)%MOD)%MOD;
cout << (ans * v1)%MOD << endl;
}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1; cin >> t;
 while(t--) {
solve();
}
return 0;
}