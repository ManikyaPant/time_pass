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
        vector<int> sieve(n+1,1);
        sieve[1]=0;
        for(int i=2;i<=n;i++) {
                if(sieve[i]==1) {
           for(int j=i*i;j<=n;j+=i) {
                  sieve[j]=0;
                }
                }
        }
        //generating all the primes between 1 and 8
vector <int> ans;
        for(int i=1;i<=n;i++) {
           if(sieve[i]==1) {
                        ans.push_back(i);
             int pow=i*i;
                while(pow<=n) {
                        ans.push_back(pow);
                        pow*=i;
                        }
                }
            
        }
        cout << ans.size() << endl;
        for(auto it: ans)
        cout << it << " ";
        cout << endl;

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1;
 while(t--) {
solve();
}
return 0;
}
