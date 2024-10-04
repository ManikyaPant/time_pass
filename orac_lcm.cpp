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
        int arr[n];
        for(auto &it: arr)
        cin >> it;
        int N=2e5+5;
        vector <int> spf(N,1);
        vector <int> sieve(N,1);
        vector <int> primes;
        sieve[1]=1;
        for(int i=1;i<=N;i++)
                spf[i]=i;
        for(int i=2;i<=N;i++) {
                if(spf[i]==i) {
                  for(int j=i*i;j<=N;j+=i)
                                spf[j]=i;
                }
                
        }
        for(int i=2;i<=N;i++) {
           if(sieve[i]==1) {
                for(int j=i*i;j<=N;j+=i)
                                sieve[j]=0;
                        primes.push_back(i);
                }
        }
           
       
        vector < vector <int>> factor(n,vector <int>(N,0));
        for(int i=0;i<n;i++) {
                int num=arr[i];
                while(num!=1) {
              int x=spf[num];
                int c=0;
                while(spf[num]==x) {
                     c++;
                     num=num/x;
                }
                factor[i][x]+=c;
                }
        }

        int ans=1;
        for(int i=0;i<primes.size();i++) {
               int num=primes[i];
                vector <int> temp (n);
                for(int j=0;j<n;j++) {
                    temp[j]=factor[j][num]; 
                }
                sort(temp.begin(),temp.end());
                int pow=temp[1];
                for(int i=0;i<pow;i++) {
                   ans=ans*num;
                }
           
        }
        cout << ans << endl;


}

signed main() {
//ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1;
 while(t--) {
solve();
}
return 0;
}
