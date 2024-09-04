/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n;
        cin >> n;
        char grid[n][4];
        for(int i=0;i<n;i++) {
         for(int j=0;j<4;j++)
                        cin >> grid[i][j];
        }
        for(int i=n-1;i>=0;i--) {
          for(int j=0;j<4;j++) {
                if(grid[i][j]=='#')
                                cout << j+1 << " ";
                }
        }
        cout << endl;

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
