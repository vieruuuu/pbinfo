#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n, c, n1 = 0, n2 = 0, p1 = 1, p2 = 1, d;
  cin >> n;

  while (n != 0) {
    c = n % 10;
    if (c % 2 == 0) {
      n1 = c * p1 + n1;
      p1 = p1 * 10;
    } else {
      n2 = c * p2 + n2;
      p2 = p2 * 10;
    }
    n = n / 10;
  }
  d = abs(n1 - n2);
  cout << d;

  return 0;
}
