#include <iostream>
using namespace std;
int main() {
  int a, b, r;

  cin >> a >> b;

  while (b != 0) {
    r = a % b;
    a = b;
    b = r;
  }

  for (int d = 1; d <= a; d++) {
    if (a % d == 0) {
      cout << d << " ";
    }
  }

  return 0;
}