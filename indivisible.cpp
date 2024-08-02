#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n;
        cin >> n;
        if(n==1) {
            cout << 1 << endl;
                return ;
        }
        if(n%2==1)
                cout << -1 << endl;
        else {
        
           for(int i=n-1;i>=1;i-=2)
                        cout << i << " " << i+1 << " ";
                   cout << endl;
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
