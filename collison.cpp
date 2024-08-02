#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n,m;
        cin >> n >> m;
        multiset <int> st;
        for(int i=0;i<n;i++) {
           int x,v;
                cin >> x >> v;
                st.insert(x*v);
        }
      int ans=0;
        for(int i=0;i<m;i++) {
             int y,v;
                cin >> y >> v;

                auto record= st.find(y*v);
                if(record!=st.end()) {
                        ans++;
                        st.erase(record);
                }
        }
        cout << ans << endl;

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
