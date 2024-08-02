#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n;
cin >> n;
int val=n*n;
int ans[n][n];
vector <int> ans_1;
for(int i=1;i<=(n*n-1)/2+1;i++) {
    ans_1.push_back(n*n-i+1);
    ans_1.push_back(i);
}

// for(auto i: ans_1) {
//     cout << i << " ";
// }
// cout << endl;

int index=0;
for(int i=0;i<n;i++) {
    if(i%2==0) {
        for(int j=0;j<n;j++) {
               ans[i][j]=ans_1[index++];
        }
    }
    else {
        for(int j=n-1;j>=0;j--) {
              ans[i][j]=ans_1[index++];
        }
    }
}
for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
        cout << ans[i][j] << " ";
    }

    cout << endl;
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