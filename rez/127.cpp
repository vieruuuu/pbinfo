#include <iostream>

using namespace std;

int main() {
  int n, x, S = 0;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> x;

    while (x > 9) {
      x = x / 10;
    }

    S = S + x;
  }

  cout << S;
}