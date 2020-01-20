#include <iostream>

using namespace std;

int main() {
  int n, m;

  cin >> n;

  int x[n];

  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  cin >> m;

  int y[m];

  for (int i = 0; i < m; i++) {
    cin >> y[i];
  }

  for (int i = 0; i < m; i++) {
    int el = y[i];
    int st = 0, dr = n;
    int gasit = 0;

    while (st <= dr && !gasit) {
      int mij = (st + dr) / 2;

      if (el == x[mij]) {
        gasit = 1;
      } else if (el < x[mij]) {
        dr = mij - 1;
      } else {
        st = mij + 1;
      }
    }

    cout << gasit << ' ';
  }
}