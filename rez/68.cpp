#include <iostream>

using namespace std;

int main() {
  int max, n, c;
  cin >> n;
  max = n % 10;
  while (n != 0) {
    c = n % 10;
    if (c > max)
      max = c;
    n = n / 10;
  }
  cout << max;

  return 0;
}
