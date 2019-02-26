#include <iostream>

using namespace std;

int main() {
  int n, s, a, b, c;

  cin >> n;

  c = n % 10;
  b = n % 100 / 10;
  a = n / 100;
  s = a + b + c;

  cout << s;

  return 0;
}