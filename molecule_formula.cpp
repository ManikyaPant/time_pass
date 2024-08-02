/* Author: Serpentx
    Noob here xD           */
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD =1e9+7;
const int INF=LLONG_MAX >>1;

void solve() {
string formula;
        cin >> formula;
        int n= formula.length();
        map < string,int> mp;
        stack <char> st;
        string element;
        int flag=0;
        for(int i=0;i<n;i++) {
         st.push(formula[i]);
                if(formula[i] >='0' && formula[i] <='9')
                        flag=1;
                if(flag==1 && ((formula[i] >='A' && formula[i] <='Z') || formula[i]=='(')) {
                            st.pop();
                            int fac=1;
                             int num=0;
                            while(!st.empty() && (st.top() >='0' && st.top() <='9')) {
                                num+= (st.top()-48)*fac;
                                fac=fac*10;
                                st.pop();
                        }
                        while(!st.empty()) {
                                element.push_back(st.top());
                                st.pop();
                        }
                        reverse(element.begin(),element.end());
                        if(num==0) num++;
                        mp[element]+=num;
i--;
                        flag=0;
                }


        }
        if(flag==1) {
                            int fac=1;
                             int num=0;
                            while(!st.empty() && (st.top() >='0' && st.top() <='9')) {
                                num+= (st.top()-48)*fac;
                                fac=fac*10;
                                st.pop();
                        }
                        while(!st.empty()) {
                                element.push_back(st.top());
                                st.pop();
                        }
                        reverse(element.begin(),element.end());
                        if(num==0) num++;
                        mp[element]+=num;

                        flag=0;
        }


        for(auto it: mp) {
               cout << it.first << it.second;
        }

        cout << endl;

}

signed main() {
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
 int t=1;
cin >> t;
 while(t--) {
solve();
}
return 0;
}
