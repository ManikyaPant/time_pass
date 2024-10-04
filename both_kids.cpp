/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;


int func(map <int,int> &mp,int n) {
int fact=0;
for(int i=1;i*i<=n;i++) {
        if(n%i==0) {
               if(mp.find(i)!=mp.end()) {
                        fact+=mp[i];
                        }
                if(mp.find(n/i)!=mp.end()) {
                        fact+=mp[n/i];
                        }
                if((mp.find(n/i)!=mp.end()) && (mp.find(i)!=mp.end()) && i==n/i)
                                fact-=mp[i];

                }
            
        }
return fact;
}


void solve() {
int n;
        cin >> n;
         map <int,int >mp; 
        for(int i=0;i<n;i++) {
          int val;
                cin >> val;
                if(val <=n)
                      mp[val]++; 
        }
        int ans=0;
        for(int i=1;i<=n;i++) {
           ans=max(ans,func(mp, i));
        }
        cout << ans << endl;

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
