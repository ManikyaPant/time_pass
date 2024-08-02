#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
int n,m;
cin >> n >> m;
vector <int> left(n,INF);
vector <int> right(n,-INF);

vector <int> index(m,1);
for(int i=0;i<m;i++) {
    int f1,f2;
    cin >> f1 >> f2;

    if(f2 < f1) swap(f1,f2);

    index[i]=f2;
    
}
if(m==0) {
    cout <<( n*(n+1))/2 << endl;
    return;
}

sort(index.begin(),index.end());

int ptr1=0,ans=0;

for(int i=1;i<=n;i++) {

    if(index[ptr1] >i && ptr1<m) {
          ans+= (index[ptr1]-i);
        //   cout << ans  << i<< endl;
    }

    else {
        while(ptr1 < m && index[ptr1] <=i)  {
            ptr1++;
        }

        if(ptr1<m) {
            if(index[ptr1]==m) {
                ans++;
                // cout << ans << i << endl;
            }
            else {
             ans+=index[ptr1]-i;
            //  cout << ans << i <<endl;
            }
        }

        else {
            ans+= n-i+1;
            // cout << ans << i << endl;
        }

            

}
}
      
cout << ans << endl;


}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t; cin >> t;
 while(t--) {
solve();
}
return 0;
}