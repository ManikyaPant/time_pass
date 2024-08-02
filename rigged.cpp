#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.first > b.first;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second;
    sort(arr.begin() + 1, arr.end());

    int weight = arr[0].first;
    int rep = arr[0].second;

    int flag = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i].first >= weight)          //all people that can lift more than equal to us
        {
            if (arr[i].second >= rep)
            {
                cout << -1 << endl;   //if we find anyone that can lift same weight greater number of times
                return;
            }
        }
    }

    cout << weight << endl;
    return;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}