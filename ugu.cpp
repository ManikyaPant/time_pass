#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++) {
    char c;
    cin >> c;
    arr[i]=c-48;
}
int ans=0;
int flag=0;
for(int i=0;i<n-1;i++) {
      if(arr[i]==1 && arr[i+1]==0)
      flag=1;
}

for(int i=0;i<n-1;i++) {
    
    if(arr[i]==1 && arr[i+1]==0) {
        ans+=2;
    }
     
}
if(ans>=1) {
    if(arr[n-1]==0)
    ans--;
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