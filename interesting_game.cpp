#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

bool cmp(const pair<int,int>&a, const pair <int,int>&b){
    return a.first+a.second > b.first+b.second;
}

void solve() {
int n;
cin >> n;
vector <pair<int,int>>  arr(n);
for(int i=0;i<n;i++) {
    cin >> arr[i].first;
}
for(int i=0;i<n;i++) {
    cin >> arr[i].second;
}

sort(arr.begin(),arr.end(),cmp);
int sa=0,sb=0;
for(int i=0;i<n;i++) {
    if(i%2==0) {
        sa+=arr[i].first;
    }
    else {
        sb+=arr[i].second;
    }
}
if(sa > sb) {
    cout << "Alice" << endl;
}
else if( sb > sa) {
    cout << "Bob" << endl;
}
else {
    cout << "Tie" << endl;
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