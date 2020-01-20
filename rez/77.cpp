#include <iostream>

using namespace std;

int main() {
  int n, c, cifra, k = 0;
  cin >> n;
  do {
    c = n % 10;
    if (c % 2 == 0 && k == 0) {
      k = 1;
      cifra = c;
    }
    n = n / 10;

  } while (n != 0);
  if (k == 0) {
    cout << -1;
  } else {
    cout << cifra;
  }
  return 0;
}
