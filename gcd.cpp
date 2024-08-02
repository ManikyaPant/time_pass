#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

int gcd(int a,int b)  {
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}

void solve() {
int n;
cin >> n;
vector <int> arr(n);
vector <int> prefix(n+1,0);

for(int i=0;i<n;i++) {
    cin >> arr[i];
    prefix[i+1]=prefix[i]+arr[i];
}
int m=-INF;
for(int i=1;i<n;i++) {
    m=max(m,gcd(prefix[i],prefix[n]-prefix[i]));
}
cout << m << endl;
}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1; cin >> t;
 while(t--) {
solve();
}
return 0;
}