#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n;
cin >> n;
vector <pair<int,int>> arr(n);

for(int i=0;i<n;i++) {
    int val;
    cin >> val;
    arr[i]={val,i};
}

sort(arr.begin(),arr.end());
vector <pair <int,int>> ans;
int prev=arr[0].first;
for(int i=1;i<n;i++) {
     if(arr[i].first % prev==0) {
     }
    else {
        ans.push_back({arr[i].second , prev-arr[i].first% prev});
        arr[i].first=arr[i].first+prev-arr[i].first%prev;
    }
    prev=arr[i].first;
}

cout << ans.size() << endl;

for(auto it: ans) {
    cout << it.first+1 << " " << it.second << endl;
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