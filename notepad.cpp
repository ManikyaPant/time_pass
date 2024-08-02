#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n;
cin >> n;
string str;
cin >> str;

unordered_map <string,pair<int,int>> my_map;
int flag=0;

for(int i=0;i<n;i++) {
    if(my_map.find(str.substr(i,2))==my_map.end() ) {
    my_map[str.substr(i,2)]={i,i+1};
    }

    else {
        if( my_map[str.substr(i,2)].second < i) {
        flag=1;
        break;
        }
    }

}

if(flag)
cout << "YES" << endl;

else
cout << "NO" << endl;

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t; cin >> t;
 while(t--) {
solve();
}
return 0;
}