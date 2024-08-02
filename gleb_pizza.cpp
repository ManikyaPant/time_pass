/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int r,d;
        cin >> r >> d;
        int q;
        cin >> q;
        int ans=0;
        while(q--) {
           int x, y , c;
                cin >> x >> y >> c;
                int ex1= x*x+y*y;
                int ex2= d*d+ r*r + c*c - 2*c*d -2*r*d + 2*c*r;
                int ex3 =sqrt((double)ex1);
                
                        //cout << ex1  << "--------------------" << ex2 << "----" << ex3 << endl;
//                        cout << x << y << endl;
                 if(ex1 >= ex2) {
                        if(r-c >=0 && ex1 <= r*r+c*c-2*r*c) {
                              ans++; 
                        }
//                        cout << 7-q <<  endl;
                }
        }

        cout << ans << endl;

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1;
//cin >> t;

 while(t--) {
solve();
}
return 0;
}
