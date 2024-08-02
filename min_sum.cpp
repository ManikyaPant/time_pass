#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'


void solve() {

	int n,k;
	cin >> n >>k;
	vector <int> arr(n);
	int sum=0;
	for(int i=0;i<n;i++) {
		cin >> arr[i];
		sum+=arr[i];
	}
        int max=0,index=-1,dir=0;
	for(int i=0;i<k;i++) {
		max=0;index=-1,dir=0;
		for(int j=0;j<n-1;j++) {
                       if(abs(arr[j+1]-arr[j]) > max) {
			       max=abs(arr[j+1]-arr[j]);
			       index=j;
			       if(arr[j+1] > arr[j]) {
				       dir=-1;
			       }
			       else {
				       dir=1;
			       }
		       }
		}
		if(dir==-1)
			arr[index+1]=arr[index];
		else if(dir==1)
			arr[index]=arr[index+1];
		sum-=max;;

	}
	cout << sum << endl;
}

signed main() {
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
