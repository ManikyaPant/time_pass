#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n;
cin >> n;
int ans=0,flag=0;
vector <int> a(n);
vector <int> b(n+1);
for(int i=0;i<n;i++) {
    cin >> a[i];
}
for(int i=0;i<=n;i++) {
    cin >> b[i];
}
int m=-INF;
int mi=INF;
for(int i=0;i<n;i++) {
      ans=ans+(abs(b[i]-a[i]));
      if(b[n]>=min(a[i],b[i]) && b[n]<=max(a[i],b[i])) {
        flag=1;
      }
     
      if(min(abs(a[i]-b[n]),abs(b[i]-b[n]))<mi) {
        mi=min(abs(a[i]-b[n]),abs(b[i]-b[n]));
        // cout << mi << endl;
      }
}
if(flag==1) {
    ans++;
}
if(flag==0) {
ans=ans+ (mi)+1;
}
    

cout << ans << endl;
}

signed main() {
// ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t; cin >> t;
 while(t--) {
solve();
}
return 0;
}