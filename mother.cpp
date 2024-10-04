/* Author: Serpentx
    noob*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
    int n, d, k;
    cin >> n >> d >> k;
    
    map<int, int> st1, st2;
    
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        st1[x]++; 
        st2[y]++;  
    }

    vector<int> arr(n, 0);
    pair<int, int> mother = {1, d};  
    pair<int, int> brother = {1, d}; 

    int dis = 0;

    for (int i = 1; i <= d; i++) {
        if (st1.find(i) != st1.end())
            dis += st1[i];  // Add from st1
    }

    int minDis = dis;
    int maxDis = dis;

    for (int i = 1; i <= n - d; i++) {
        if (st2.find(i) != st2.end())
            dis -= st2[i];
        
        if (st1.find(i + d) != st1.end())
            dis += st1[i + d];
        
        if (dis < minDis) {
            mother = {i + 1, i + d};
            minDis = dis;
        }

        if (dis > maxDis) {
            brother = {i + 1, i + d};
            maxDis = dis;
        }
    }

    cout << brother.first << " " << mother.first << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

