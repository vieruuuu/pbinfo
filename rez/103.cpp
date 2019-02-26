#include <iostream>

using namespace std;

int main() {
  int a, b, A;

  cin >> a >> b;
  A = a * b;
  a = 2 * (a + b);

  cout << A << " " << a;
  return 0;
}
