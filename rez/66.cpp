#include <iostream>

using namespace std;

int main() {
  int n, k = 0;
  cin >> n;
  do {
    k += 1;
    n = n / 10;
  } while (n != 0);
  cout << k;

  return 0;
}
