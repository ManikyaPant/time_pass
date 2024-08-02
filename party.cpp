#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n;
cin >> n;
map <int,int> mp;
vector <int> arr(n);
for(int i=0;i<n;i++) {
      cin >> arr[i];
      mp[i]=arr[i]-1;
}
int flag=0;
for(int i=0;i<n;i++) {
    if(mp[arr[i]-1]==i) {
         flag=1;
         cout << 2 << endl;
         return;
    }
}
if(!flag) {
    cout << 3 << endl;
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