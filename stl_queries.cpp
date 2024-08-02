#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
multiset <int> st;
int q;
cin >> q;
int sum=0;
while(q--) {
  int task,val;
  cin >> task;
  if(task==1) {
     cin >> val;
     sum+=val;
     st.insert(val);
  }
  if(task==2) {
     cin >> val;
     if(st.find(val)!=st.end()) {
        st.erase(st.find(val));
        sum-=val;
     }
  }
  if(task==3) {
         char c;
         cin >> c;
         if(c=='?') {
            if(st.size()!=0) {
                cout << *(st.begin()) << endl;
            }
            else {
                cout << "-1" << endl;
            }
         }
  }
  if(task==4) {
         char c;
         cin >> c;
         if(c=='?') {
            if(st.size()!=0) {
                auto it=st.rbegin();
                cout << *it << endl;
            }
            else {
                cout << "-1" << endl;
            }
         }
  }
  if(task==5) {
    char c;
    cin >> c;
    if(c=='?')
  cout << sum << endl;
  }
  }

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 

solve();
return 0;
}