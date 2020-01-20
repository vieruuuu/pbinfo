#include <iostream>

using namespace std;

int main() {
  int a, b, x, c;

  cin >> a >> b;

  if (a == 0 && b == 0) {
    cout << -1;
  } else {
    while (b != 0) {
      c = a % b;
      a = b;
      b = c;
    }

    x = a;
    cout << x;
  }
  return 0;
}