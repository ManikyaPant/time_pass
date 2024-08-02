#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

int gcd(int a,int b) {
    if(b==0)
    return a;
    else
    return gcd(b,a%b);   
}

void solve() {
int n,m;
cin >> n >> m;
int a[n];
int b[m];

for(int i=0;i<n;i++) 
cin >> a[i];

for(int i=0;i<m;i++) 
cin >> b[i];

sort(a,a+n);
int g1=0;

for(int i=1;i<n;i++) {
    g1=gcd(a[i]-a[0],g1);
}


for(int i=0;i<m;i++) {
    cout << gcd(a[0]+b[i],g1) << " ";
}

cout << endl;

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1; 
//  cin >> t;
 while(t--) {
solve();
}
return 0;
}