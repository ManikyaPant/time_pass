#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n,m;
cin >> n >> m;
vector <int>A (n);
vector <int>B (m);
set <int> diff_a;
set <int> uni;
set <int> diff_b;
for(int i=0;i<n;i++) {
    cin >> A[i];
    uni.insert(A[i]);
    diff_a.insert(A[i]);
}
for(int i=0;i<m;i++) {
    cin >> B[i];
     diff_b.insert(B[i]);
     uni.insert(B[i]);
     if(diff_a.find(B[i])!=diff_a.end())
     diff_a.erase(B[i]);
}

for(int i=0;i<n;i++) {
    if(diff_b.find(A[i])!=diff_b.end()) {
        diff_b.erase(A[i]);
    }
}

for(auto it:uni) {
    cout << it << " ";           //printing union
}
cout << endl;

for(auto it:uni) {
    if(diff_a.find(it)==diff_a.end() && diff_b.find(it)==diff_b.end()) {
              cout << it << " ";
       
    }
    else {
      }                                               //printing intersection
}

cout << endl;
for(auto it:diff_a) {
    cout << it << " ";           //printing A-B
}
cout << endl;
}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t; cin >> t;
 while(t--) {
solve();
}
return 0;
}