#include <iostream>

using namespace std;

int main() {
  int n, P;

  cin >> n;
  P = n % 10;
  n = n / 100;
  P = P * n;

  cout << P;
  return 0;
}