#include <iostream>

using namespace std;

int main() {
  long long a, b, d, x;

  cin >> a >> b;
  x = a - ((b - 1) * b) / 2;
  x = x / b;
  if (a == x * b + ((b - 1) * b) / 2) {
    cout << "DA";
  } else {
    cout << "NU";
  }

  return 0;
}