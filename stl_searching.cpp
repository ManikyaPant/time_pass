#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {

int n,q;
cin >> n >>q;
vector<int> arr(n);
for(int i=0;i<n;i++) {
    cin >> arr[i];
}
sort(arr.begin(),arr.end());

while(q--){
    int task,val;
    cin >> task >> val;
    if(task==1) {
        auto lb=lower_bound(arr.begin(),arr.end(),val);
        if(*lb==val) {
            cout << val <<" ";
        }
        else {
            auto ub=upper_bound(arr.begin(),arr.end(),val);
            if(ub!=arr.end()) {
                cout << *ub << " ";
            }
            else {
                cout << "-1" << " ";
            }
        }
    }
    if(task==2 ) {
         auto ub=upper_bound(arr.begin(),arr.end(),val);
            if(ub!=arr.end()) {
                cout << *ub << " ";
            }
            else {
                cout << "-1" << " ";
            }
    }
    if(task==3) {
        auto ub=upper_bound(arr.begin(),arr.end(),val);
        if(ub!=arr.end()) {
            cout << ub-arr.begin() << " ";
        }
        else
        cout << arr.size() << " ";
    }
    if(task==4) {
          auto lb=lower_bound(arr.begin(),arr.end(),val);
        if(lb!=arr.end()) {
            cout << lb-arr.begin() << " ";
        }
        else
        cout << "0" << " ";
    }
}
cout << endl;

}

signed main() {
// ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t; cin >> t;
 while(t--) {
solve();
}
return 0;
}