#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
string s;
int n;
cin >> n;
cin >> s;
int flag=-1;
int pc=-1,pn=-1;
for(auto c:s) {
   if(c-48 >=0 && c-57<=0) {
          if(c-48 <pn || flag==1) {
            cout << "NO" << endl;
            return;
          }
          pn=c-48;
   }
   if(c-97 >=0 &&c-122<=0 ) {
    flag=1;
      if(c-97 < pc) {
        cout << "NO" << endl;
        return;
      }
      pc=c-97;
   }
}
cout << "YES" << endl;
}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t; cin >> t;
 while(t--) {
solve();
}
return 0;
}