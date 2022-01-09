#include <iostream>

using namespace std;

int main() {
  int n, k, c = 0;

  cin >> n >> k;

  while (n > 9) {
    n = n / 10;
    c = c + 1;
  }

  cout << "1";

  for (int i = 0; i < c * k; i++) {
    cout << "0";
  }

  cout << endl;

  return 0;
}
