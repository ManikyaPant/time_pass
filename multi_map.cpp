#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {

int q;
cin >> q;
multimap <string,int> mp;
while(q--) {
    string task, name;
    cin >> task >> name;
     if(task=="add") {
        int marks;
        cin >> marks;

           mp.insert({name,marks});
     }
     if(task=="print") {
         auto it=mp.find(name);
         if(it!=mp.end()) {
             auto low=mp.lower_bound(name);
        // cout << "yes" << endl;
             cout << low->second << endl;
         }
         else {
            cout << "0" << endl;
         }
     }

     if(task=="eraseall") {
        mp.erase(name);
     }

     if(task=="erase") {
        auto record= mp.find(name);
        if(record!=mp.end())
        mp.erase(record);
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