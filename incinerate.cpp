#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].second;
    }
    sort(arr.begin(), arr.end());

    vector<int> min_here(n, INF);
    min_here[n - 1] = arr[n - 1].second;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i].second < min_here[i + 1])
        {
            min_here[i] = arr[i].second;
        }
        else
        {
            min_here[i] = min_here[i + 1];
        }
    }

    int index = 0;
    int flag = 0;
    int i = 0;
    int damage = 0;
    while (i<n && k >= 0)
    {
        if (k <=0)
        {
            // cout << k << damage << "-----" << endl;
            flag = 1;
            break;
        }
        else
        {
            for (i = index; i < n; i++)
            {
                if (arr[i].first -damage > k)
                {
                    damage+= k;
                    k = k - min_here[i];
                    if(k<=0) {
                        flag=1;
                    }
                    index = i;
                    // cout << index << k << damage<< endl;
                    break;

                }
            }
            if(i==n-1 && arr[i].first-damage <=k) {
                break;
            }
        }
    }


        if (flag)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }

    signed main()
    {
        ios::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        int t;
        cin >> t;
        while (t--)
        {
            solve();
        }
        return 0;
    }