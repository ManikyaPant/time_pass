/* Author: Serpentx
    Noob here xD           */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
int X, Y;
void print_pat(int &x, int &y, int &i, int &j, int &dir, int steps) {
  int c = 0;
  while (c < steps) {
    if (dir % 4 == 0) {
      while (j < y && c < steps) {
        cout << i << " " << ++j << " ";
        c++;
      }
      if (y != j && c == steps)
        return;
      y--;
      dir++;
    }
    if (dir % 4 == 1) {
      while (i < x && c < steps) {
        cout << ++i << " " << j << " ";
        c++;
      }
      if (i != x && c == steps)
        return;
      x--;
      dir++;
    }
    if (dir % 4 == 2) {
      while (j >= Y - y+1 && c < steps) {
        cout << i << " " << --j << " ";
        c++;
      }
      if (j > Y - y && c == steps) {
        return;
      }
      dir++;
    }
    if (dir % 4 == 3) {
      while (i >X - x+1 && c < steps) {
        cout << --i << "" << " " << j << " ";
        c++;
      }
               //         cout << x << endl;
      if (i > X - x && c == steps) {
        return;
      }
      dir++;
      //         cout << "end " << i << endl;
    }
  }
}

void solve() {
  int x, y, k;
  cin >> X >> Y >> k;
  x = X;
  y = Y;
  int i = 1, j = 0, dir = 0;
  for (int l = 1; l <= k; l++) {
    if (l <= k - 1) {
      cout << 2 << " ";
      print_pat(x, y, i, j, dir, 2);
      cout << endl;
    } else {
      cout << X * Y - 2 * (k - 1) << " ";
      print_pat(x, y, i, j, dir, X * Y - 2 * (k - 1));
      cout << endl;
    }
  }
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int t = 1;
  while (t--) {
    solve();
  }
  return 0;
}
