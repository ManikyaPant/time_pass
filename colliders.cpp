/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
#include <ostream>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int N = 1e5 + 5;
  vector<int> spf(1e5 + 5, 1);
  for (int i = 1; i <= N; i++)
    spf[i] = i;

  for (int i = 2; i <= N; i++) {
    if (spf[i] == i) {
      for (int j = i * i; j <= N; j += i) {
        if (spf[j] == j)
          spf[j] = i;
      }
    }
  }

map<int,int> mp;
set <int> st;
map <int, vector<int>> possible;
int n,m;
        cin >> n >> m;
        while(m--) {
          char c; int num;
                cin >> c;
                if(c=='+') {
                        cin >> num;
                        int val=num;
                                bool flag=false;
                        vector <int> vec;
                        int conf;
                        if(st.find(num)!=st.end()) {
                          cout << "Already on" << endl;
                                continue;
                        }
                 while(num!=1) {
                         int x=spf[num];
                                while(spf[num]==x) {
                                  num=num/x;
                                }
                                if(mp.find(x)!=mp.end()) {
                                       conf=x;
                                        flag=true;
                                }
                                else {
                                vec.push_back(x);
                                }
                        }
                         if(flag) {
                            cout << "Conflict with " << possible[conf][0]   << endl;
                                continue;
                        }
                           for(auto it: vec)
                            mp[it]++;
                        cout << "Success" << endl;
                        for(auto it:vec) {
                           possible[it].push_back(val);
                        }
                      st.insert(val);   
                 }
                  if(c=='-') {
                        cin >> num;
                        int val=num;
                        if(st.find(num)==st.end()) {
                               cout << "Already off" << endl;
                                continue;
                        }
                        else {
                                st.erase(num);
                            while(num!=1) {
                                  int x=spf[num];
                                        while(spf[num]==x) {
                                           num=num/x;
                                         }
                                        auto it=find(possible[x].begin(),possible[x].end(),val);
                                        possible[x].erase(it);
                                        mp[x]--;
                                        if(mp[x]==0)
                                         mp.erase(mp.find(x));
                                }
                                cout << "Success" << endl;
                        }
                }


                }





}

signed main() {
  //ios::sync_with_stdio(0);
  //cin.tie(NULL);
  //cout.tie(NULL);

  int t = 1;
  while (t--) {
    solve();
  }
  return 0;
}
