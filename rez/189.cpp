#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int x;

    cin >> x;

    int cx = x;
    int ok = 1;

    int u_cifra = x % 10;
    int p_cifra = (x / 10) % 10;

    while (x > 9 && u_cifra < p_cifra) {
      x = x / 10;
      u_cifra = x % 10;
      p_cifra = (x / 10) % 10;
    }

    if (x == cx || x < 10) {
      ok = 0;
    }

    while (x > 9 && u_cifra > p_cifra) {
      x = x / 10;
      u_cifra = x % 10;
      p_cifra = (x / 10) % 10;
    }

    if (x > 9) {
      ok = 0;
    }

    cout << ok << endl;
  }

  return 0;
}