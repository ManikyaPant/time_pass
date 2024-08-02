/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void next_time(int *time, int h, int m, int *max) {
  if (time[2] * 10 + time[3] + 1 <= m) {
    time[3] += 1;
    return;
  } else {
    time[3] = 0;

    if (time[2] + 1 <= max[2]) {
      time[2] += 1;
      return;
    } else {
      time[2] = 0;

      if (time[0] * 10 + time[1] + 1 <= h) {
        time[1] += 1;
      } else {
        time[1] = 0;
        if (time[0] + 1 <= max[0]) {
          time[0] += 1;
        } else {
          time[0] = 0;
        }
      }
    }
  }
}

bool is_symm(int *time, int *symm) {
  for (int i = 0; i < 4; i++) {
    int flag = 0;
    for (int j = 0; j < 5; j++) {
      if (time[i] == symm[j])
        flag = 1;
    }
    if (!flag) {
      //                      cout << "false" << endl;
      return false;
    }
  }
  //       cout << "true" << endl;
  return true;
}

void create_symm(int *rev, int *time) {
  for (int i = 0; i < 4; i++) {
    int val = time[i];
    if (val == 0) {
      rev[3 - i] = 0;
    }
    if (val == 1)
      rev[3 - i] = 1;
    if (val == 2)
      rev[3 - i] = 5;
    if (val == 5)
      rev[3 - i] = 2;
    if (val == 8)
      rev[3 - i] = 8;
  }
}

bool valid_time(int *time, int *max) {
  if (time[0] * 10 + time[1] <= max[0] * 10 + max[1]) {
    if (time[2] * 10 + time[3] <= max[2] * 10 + max[3])
      return true;
  }
  return false;
}
void solve() {
  int h, m;
  cin >> h >> m;
  h--;
  m--;
  string ti;
  cin >> ti;
  int rev[4] = {1, 5, 5, 1};
  int time[4] = {ti[0] - 48, ti[1] - 48, ti[3] - 48, ti[4] - 48};
  int symm[5] = {0, 1, 2, 5, 8};
  int max[] = {(h / 10) % 10, h % 10, (m / 10) % 10, m % 10};
  while (true) {
    if (is_symm(time, symm)) {
      create_symm(rev, time);
      if (valid_time(rev, max)) {
        cout << time[0] << time[1] << ":" << time[2] << time[3] << endl;
        break;
      }
    }
    //                        cout << "yes" << endl;
    next_time(time, h, m, max);
   // cout << time[0] << time[1] << ":" << time[2] << time[3] << endl;
  }
}
signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
