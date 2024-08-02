#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int q;
cin >> q;
set <int> st;
while(q--) {
    string task;
    cin >> task;
    int n;
    if(task=="print") {
          for(auto it: st) {
            cout << it << " ";
          }
          cout << endl;
    }
    if(task=="add") {
        cin >> n;
        st.insert(n);
    }

    if(task=="erase") {
        cin >> n;
        auto record=st.find(n);
        if(record!=st.end()) {
            st.erase(record);
        }
    }

    if(task=="find") {
        cin >> n;
        auto record=st.find(n);
         if(record!=st.end()) {
            cout << "YES" << endl;
         }
         else {
            cout << "NO" << endl;
         }
    }
    if(task=="empty") {
        st.clear();
    }
    
    }

}

signed main() {
// ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t; cin >> t;
 while(t--) {
solve();
}
return 0;
}