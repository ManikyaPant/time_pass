#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n, m;
    cin >> n;
    int arr[n];
    int brr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    cin >> m;

    vector<int> d(m);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != brr[i])
            mp[brr[i]]++; // store all the places where the 2 arrays are different
    }
    for (int i = 0; i < m; i++)
    {
        cin >> d[i];
    }
    int flag = 0;
    int cu = 0;
    vector<int> unused;
    set<int> used;
    int prev = -1;

    for (int i = 0; i < m; i++)
    {
        if (mp.find(d[i]) != mp.end())
        {
            used.insert(d[i]);
            if (mp[d[i]] == 1) // check if the given d[i] can be used where arrays mismatch
                mp.erase(d[i]);
            else
                mp[d[i]]--;
            while (unused.size() != 0)
            {

                // maintained an array of unused values(values that didn't
                //  had a corresponding place in map.
                //  if we find a value after these unused value that could
                // be used, we can use these values before it and empty the vector

                unused.pop_back();
            }
        }

    else if (used.find(d[i]) != used.end())     //if there is a repition of a particular d[i] but there
                                                //is no suitable positon in array b for it, use it in
                                                //it's previous position
    {
        while (unused.size() != 0)
        {
            int val = unused[unused.size() - 1];
            unused.pop_back();                          //again empty the unused vector 
        }
    }
    else unused.push_back(d[i]);    //if none push it in unused vector
}

if (mp.size() == 0 && unused.size() == 0)
{
    cout << "YES" << endl;                     //if map and unused vector both are empty (answer found)
    return;
}

if (mp.size() != 0)
{
    cout << "NO" << endl;    //if there was an element to whom we couldn't correct (answer found again)
    return;
}
int index = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == brr[i])               //now comes when map is empty but unused variables are still there
    {
    if(unused.back()==arr[i])                            //search if same value is present in unused vector;
    flag=1;
    }
}

if (flag)
{
    cout << "YES" << endl;
}
else
    cout << "NO" << endl;
}

signed main()
{
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}