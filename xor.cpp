#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int a, b;
        cin >> a >> b;
        int ans=1;
        int val= a ^ b;
        int po=0;
        for(int i=0;i<31;i++) {
                 if(((val >> i) & 1) ==0)
                   po++;
                else
                 break;
        }
   cout << (1<<po) << endl;
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
