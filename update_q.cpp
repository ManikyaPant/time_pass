/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        int arr[m];
        multiset <char> ms;
        for(int i=0;i<m;i++)
                cin >> arr[i];
        char str[m];
        for(int  i=0;i<m;i++)
                cin >> str[i];
        sort(str,str+m);
        sort(arr,arr+m);
        for(int i=0;i<m;i++)
                ms.insert(str[i]);
        set <int> vis;
        
        for(int i=0;i<m;i++) {
              int pos=arr[i];
                if(vis.find(pos)==vis.end()) {
                       vis.insert(pos);
                        s[pos-1]=*ms.begin();
                        //cout << pos << " " << *ms.begin() << endl;
                        ms.erase(ms.begin());
                       // cout << pos << endl;
                }
                else {
                      char val= *ms.rbegin();
                        auto record=ms.find(val);
                        ms.erase(record);
                        //cout << val << endl;
                }
                
        }
        cout << s << endl;
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
