#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int q;
cin >> q;
multiset <int> ms;
while(q--) {
    string task;  int val;
    cin >> task;
    if(task=="add"){
        cin >> val;
        ms.insert(val);
    }
    if(task=="erase") {
        cin >> val;
        auto record=ms.find(val);
        if(record!=ms.end()) {
             ms.erase(record);
        }
    }
    if(task=="eraseall") {
        cin >> val;
        ms.erase(val);
    }

    if(task=="find") {
        cin >> val;
        if(ms.find(val)!=ms.end()) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    if(task=="count") {
        cin >> val;
       
        cout << ms.count(val)<< endl;
    }
    if(task=="print") {
        for(auto it: ms) {
            cout << it <<" ";
        }
        cout << endl;
    }
    if(task=="empty") {
       ms.clear();
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