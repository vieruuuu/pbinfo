#include <iostream>

using namespace std;

int main() {
  int n, P;

  cin >> n;
  P = n % 10;
  n = n / 100;
  P = n * 10 + P;
  P = P * P;

  cout << P;
  return 0;
}