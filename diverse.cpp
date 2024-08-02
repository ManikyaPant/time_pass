#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

bool valid(vector <int>& fre) {
    int count=0;
     for(auto it: fre) {
        if(it > 0)
        count++;
     }
     for(auto it: fre) {
        if(it >count)
           return false;
     }
     
     return true;
}

void solve() {

int n;
cin >> n;
string s;
cin >> s;
int ans=0;
for(int i=0;i<n;i++) {
vector <int> fre(10,0);
    for(int j=0;j<100 && j<n-i; j++) {
           fre[s[i+j]-48]++;
           if(valid(fre)) {
            // if(i==1) {
            //     cout << j+1 << endl;
            //     cout << fre[1] << endl;
            // }
           ans++;
           }
    }
    // cout << i << " " << ans << endl;
}

cout << ans << endl;
}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1; cin >> t;
 while(t--) {
solve();
}
return 0;
}