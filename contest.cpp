#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n;
cin >> n;

int arr[n];
int brr[n];

for(int i=0;i<n;i++)
cin >> arr[i];
for(int i=0;i<n;i++)
cin >> brr[i];

int ans=0;


for(int i=0;i<n;i++) {
     if(arr[i-ans] <=brr[i]) {         // i-ans is used for shifting of the problems that would be there
        continue;                      //only adding a problem when there is mismatch
     }
     else
     ans++;
}
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