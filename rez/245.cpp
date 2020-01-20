#include <iostream>

using namespace std;

int main() {
  int n, maxDiv = 1, maxNr = 1;

  cin >> n;

  for (int x = 1; x <= n; x++) {
    int k = 0;

    for (int d = 2; d * d <= x; d++) {
      if (x % d == 0) {
        k++;
      }
    }

    if (k > maxDiv) {
      maxDiv = k;
      maxNr = x;
    }
  }
  cout << maxNr;
  return 0;
}
