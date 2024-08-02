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

for(int i=0;i<n;i++) {
    cin >> arr[i];
}

sort(arr+1,arr+n);




for(int i=1;i<n;i++) {
      if(arr[i] > arr[0]) {
         if((arr[i]+arr[0])%2==0)
          arr[0]=(arr[i]+arr[0])/2;
          else
        arr[0]=(arr[i]+arr[0])/2+1;
      }
}
cout << arr[0] << endl;

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t; cin >> t;
 while(t--) {
solve();
}
return 0;
}