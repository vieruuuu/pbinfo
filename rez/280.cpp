#include <iostream>
using namespace std;

int main() {
  int n, c, cn, max = 0, ogl, aparitii = 0, k = 0;
  cin >> n;
  while (n != 0) {
    cn = n;
    ogl = 0;

    while (cn != 0) {
      c = cn % 10;
      ogl = ogl * 10 + c;
      cn = cn / 10;
    }
    if (n == ogl) {
      k = 1;
      if (n > max) {
        aparitii = 0;
        max = n;
      }
      if (n == max) {
        aparitii += 1;
      }
    }
    cin >> n;
  }
  if (k == 0) {
    cout << "NU EXISTA";

  } else {
    cout << max << ' ' << aparitii;
  }

  return 0;
}
