#include <iostream>

using namespace std;

int main() {
  int maxim, x, i, n;

  cin >> n >> x;
  maxim = x;
  i = 2;

  while (i <= n) {
    cin >> x;

    if (maxim < x) {
      maxim = x;
    }

    i = i + 1;
  }

  cout << maxim;
  return 0;
}