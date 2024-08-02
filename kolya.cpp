/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
  int n, m, d;
  cin >> n >> m >> d;
  int ans = 0;
  priority_queue<int, vector<int>, greater<int>> pq;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
multiset <int> mt;
        int sum=0;
        for(int i=0;i<n;i++) {
             ans= max(ans, sum+arr[i] -d*(i+1));
                if(arr[i]>=0) {
                mt.insert(arr[i]);
                sum+=arr[i];
                }
                if(mt.size() > m-1) {
                    int rem=*(mt.begin());
                        sum-=rem;
                        mt.erase(mt.find(rem));
                }
        }
  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
