/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;


void solve() {
       int arr[]={4,8,15,16,23,42};
        map <int, pair<int,int>> mp;
        for(int i=0;i<6;i++) {
          for(int j=i+1;j<6;j++) {
             mp[arr[i]*arr[j]]=make_pair(arr[i],arr[j]);
                }
        }
        vector <int> ans(6,0);
        cout << "? " << 1 << " " << 3 << endl;
        fflush(stdout);
        int num1, num2;
        cin >> num1;
        cout << "? " << 1 << " " << 2 << endl;
        fflush(stdout);
        cin >> num2;
        pair<int,int> a=mp[num1];
        pair<int,int>b=mp[num2];
        if(a.first==b.first || a.first==b.second) {
          ans[0]=a.first;
          ans[2]=num1/a.first;
          ans[1]=num2/a.first;
        }
        if(a.second==b.second || a.second==b.first) {
           ans[0]=a.second;
           ans[2]=num1/a.second;
           ans[1]=num2/a.second;
        }
    cout << "? " << 4 << " " << 6 << endl;
        fflush(stdout);
        cin >> num1;
        cout << "? " << 4 << " " << 5 << endl;
        fflush(stdout);
        cin >> num2;
         a=mp[num1];
        b=mp[num2];
        if(a.first==b.first || a.first==b.second) {
          ans[3]=a.first;
          ans[5]=num1/a.first;
          ans[4]=num2/a.first;
        }
        if(a.second==b.second || a.second==b.first) {
           ans[3]=a.second;
           ans[5]=num1/a.second;
           ans[4]=num2/a.second;
        }
      cout << "! ";
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
