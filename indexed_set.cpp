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
    string task; int val;
    cin >> task >> val;
    if(task=="add") {
        st.insert(val);
    }
    if(task=="remove") {
        auto record=st.find(val);
        if(record!=st.end()) {
            st.erase(record);
        }
    }

    if(task=="find") {
        if(st.size() >= val+1) {
             auto it=st.begin();
             advance(it,val);
             cout << *(it) << endl;
        }
        else {
            cout << "-1" << endl;
        }
        }

    if(task=="findpos") {
        auto record= st.find(val);
        if(record!=st.end()) {
            cout << distance(st.begin(),record) << endl;
        }
        else {
            st.insert(val);
            record=st.find(val);
            cout << distance(st.begin(),record) << endl;
            st.erase(record);
        }
    }
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


