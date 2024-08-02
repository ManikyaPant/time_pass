#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n=40,m=40;
vector <int> arr(n);
vector <int> prev(n);

int index=0;
for(auto &it:prev) {
    it=index++;
}

for(int i=0;i<m;i++) {
for(int j=0;j<n;j++) {
    if(j!=0 && j!=n-i-1) {
        arr[j]=(prev[j-1]|prev[j])|prev[j+1];
    }
    if(j==0) {
        arr[j]=prev[j]|prev[j+1];
    }
}
for(auto it: arr) {
    cout << it << " ";
}
cout << endl;
prev=arr;
}

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
//  int t; cin >> t;
//  while(t--) {
solve();
// }
return 0;
}