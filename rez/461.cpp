#include <iostream>

using namespace std;

int main() {
  int x, y, h1, m1, h2, m2;

  cin >> h1 >> m1 >> x >> y;

  if (m1 + y > 59) {
    m1 = m1 + y;
    h2 = h1 + x + m1 / 60;
    m2 = m1 % 60;

    if (h2 > 23) {
      h2 = h2 % 24;
    }
  } else {
    m2 = m1 + y;
    h2 = h1 + x;
  }

  cout << h2 << " " << m2;
  return 0;
}