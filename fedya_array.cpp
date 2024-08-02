#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int M,m;
cin >> M >> m;
cout << 2*abs(M-m) << endl;
int arr[2*abs(M-m)];
int n= abs(M-m);
arr[0]=M;
int start=M-1;
arr[0+n]=m;
for(int i=1;i<=n-1;i++) {
    arr[i]=start;
    arr[2*n-i]=start;
    start-=1;
    // cout << arr[n-i-1] << endl;
}
for(auto it: arr) {
    cout << it << " " ;
}
cout << endl;
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