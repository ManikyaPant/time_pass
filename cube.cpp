#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

bool cmp(pair<int,int>a, pair<int,int> b) {
    return a.first > b.first;
}

void solve() {
int n,f,k;
cin >> n >> f>> k;
vector <pair<int,int>> arr(n);
f--; k--;
for(int i=0;i<n;i++) {
    cin >> arr[i].first;
    arr[i].second=i;
}

int fav= arr[f].first;
sort(arr.begin(),arr.end(),cmp);  
   if(arr[k].first > fav) {
    cout << "NO" << endl;
    return;
   }
   else if(arr[k].first==fav) {
          if( arr[k+1].first== fav) {
            cout << "MAYBE" << endl;
            return;
          }
          else {
            cout << "YES" << endl;
          }
   }

   else {
    cout << "YES" << endl;
   }
}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1;
cin >> t;
 while(t--) {
solve();
}
return 0;
}