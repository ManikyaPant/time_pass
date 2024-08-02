#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {

int n;
cin >> n;
vector < vector <int>> arr(n);      //make a 2-d vector for getting 32 bits of the integer

map <int,int> mp;    //store them in a map along with freq;

for(int i=0;i<n;i++) {
     int l;
     cin >> l;

     for(int j=0;j<l;j++) {
           int v;
           cin >> v;
           arr[i].push_back(v);
           mp[v]++;
     }
}

int size=mp.size();


for(int i=0;i<n;i++) {
    for(int j=0;j<arr[i].size();j++) {         // Now checking if removing this number is beneficial;
            int v=arr[i][j];
            if(mp[v]==1) {
                mp.erase(v);
            }
            else {
                mp[v]++;
            }
    }

    

    if(mp.size()==size) {
        cout << "YES" << endl;
        return ;
    }

    for(int j=0;j<arr[i].size();j++) {         // Now checking if removing this number is beneficial;
            int v=arr[i][j];
            mp[v]++;
    }

}
          cout << "NO" << endl;
          return ;
}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1; cin >> t;
 while(t--) {
solve();
}
return 0;
}