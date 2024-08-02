#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

bool cmp(const int&a, const int&b) {
    return a > b;
}

void solve() {
int n;
cin >> n;
int arr[n];
int prefix[n]; 
int flag=1;                          //what to do if array is already beautiful ?
for(int i=0;i<n;i++) {
    cin >> arr[i];
    if(i==0)
    prefix[0]=arr[0];
    else 
    prefix[i]=prefix[i-1]+arr[i];
    if(i!=0) {
        if(arr[i]==prefix[i-1])
        flag=0;
    }

}

if(flag) {
    cout << "YES" << endl;
    for(auto it : arr)
    cout << it << " ";
    cout << endl;
    return;
}

sort(arr,arr+n,cmp);

if(arr[0]==arr[n-1]) {
cout << "NO" << endl;
return;
}

else {
    swap(arr[1],arr[n-1]);
    cout << "YES" << endl;

    for(auto it: arr) {
        cout << it << " ";
    }
    cout << endl;
}






}



signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1; cin >> t;
 while(t--) {
solve();
}
return 0;
}