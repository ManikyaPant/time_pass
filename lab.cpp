#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

int arr[55][55];

bool check(int n,int i, int j, int num) {
       for(int c=0;c<n;c++) {
            for(int r=0;r<n;r++) {
                if(arr[i][c]+arr[r][j]==num)
                return true;
            }
       }

       return false;
}


void solve() {
int n;
cin >> n;

for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
        
        cin >> arr[i][j];
      
    }
}




bool ans=true;
    

for(int i=0;i<n;i++) {
    
    for(int j=0;j<n;j++) {
        if(arr[i][j]!=1) {
              if(check(n,i,j,arr[i][j])==false) {
              cout << "No" << endl;
              return;
              }
        }
    }
}

       cout << "Yes" << endl;
}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1; 
//  cin >> t;
 while(t--) {
solve();
}
return 0;
}