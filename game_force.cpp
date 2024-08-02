#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

int cmp(const int&a, const int&b) {
    return a >b;
}

void solve() {
int n;
cin >> n;
int arr[n];
int c=0;
int ans=0;
for(int i=0;i<n;i++) {
    cin >> arr[i];
    if(arr[i]==1)
    c++;
}
   ans+= n- c;
   if(c!=0)
   ans+= (c-1)/2+1;
   cout << ans << endl;
}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1; cin >> t;
 while(t--) {
solve();
}
return 0;
}