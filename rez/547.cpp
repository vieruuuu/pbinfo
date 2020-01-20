#include <iostream>

using namespace std;

int main() {
  int i, n, mi, ma, dif, c = 0;

  cin >> n;

  int v[n];

  for (i = 0; i < n; i++) {
    cin >> v[i];
  }

  mi = v[0];
  ma = v[0];

  for (i = 1; i < n; i++) {
    if (v[i] > ma) {
      ma = v[i];
    }

    if (v[i] < mi) {
      mi = v[i];
    }
  }
  dif = ma - mi;

  for (i = 0; i < n; i++) {
    if (v[i] == dif) {
      c++;
    }
  }

  cout << c;

  return 0;
}
