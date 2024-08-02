#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;
void maxSlidingWindow(vector<int>& nums, int k) {
        vector <int> ans;
        multiset <int> st;
        for(int i=0;i<k;i++) {
             st.insert(nums[i]);
        }
        ans.push_back(*(st.rbegin()));
        st.erase(st.find(nums[0]));
        for(int i=k;i<nums.size();i++) {
             st.insert(nums[i]);
             ans.push_back(*(st.rbegin()));
             st.erase(st.find(nums[i-k+1]));
        }
        for(auto it: ans) {
            cout << it << " ";
        }
        cout << endl;
    }

void solve() {
int n,k;
cin >> n >>k;
vector <int> nums(n);
for(int i=0;i<n;i++) {
    cin >> nums[i];
}
maxSlidingWindow(nums, k);

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t; cin >> t;
 while(t--) {
solve();
}
return 0;
}