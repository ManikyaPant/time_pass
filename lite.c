#include "stdio.h"
#define int long long

void solve() {
    int n;
    scanf("%lld",&n);
    printf("%d\n",32);
    for(int i=0;i<32;i++) {
         printf("%lld ",(n>>i)&1);
    }
    printf(" \n");
}

signed main() {
    int tc;
    scanf("%lld",&tc);
    while(tc--) {
        solve();
    }
}