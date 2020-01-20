#include <iostream>

using namespace std;

int main() {
  int n, cn, c, P = 1, k = 0;
  cin >> n;
  cn = n;
  while (cn != 0) {
    c = cn % 10;

    if (c % 2 != 0) {
      k = 1;
      P = P * c;
    }

    cn = cn / 10;
  }

  if (k) {
    cout << P;
  } else {
    cout << -1;
  }

  return 0;
}
