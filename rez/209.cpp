#include <iostream>

using namespace std;

int main() {
  int n, a;

  cin >> n;
  a = n % 10;
  n = n / 100;
  n = n * 10 + a;

  cout << n;
  return 0;
}