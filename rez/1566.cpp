#include <iostream>

using namespace std;

int main() {
  int n, cn, c, a, b, p = 1, fin = 0;
  cin >> n;
  cn = n;

  while (cn != 0) {
    c = cn % 100;
    a = c % 10;
    b = c / 10;
    fin = (a * 10 + b) * p + fin;
    p = p * 100;
    cn = cn / 100;
  }
  cout << fin;

  return 0;
}
