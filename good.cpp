/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

int gcd(int a , int b){
      if(b==0)
                return a;
        return gcd(b,a%b);
}

void solve() {
int a,b;
        cin >> a >> b;
        if(gcd(a,b)==1)
         cout  << "YES" << endl << a << " " << a*(b-1) << " " << a*b << endl; 
        else {
                cout << "NO" << endl;
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
