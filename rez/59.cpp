#include <iostream>

using namespace std;

int main() {
  int a, b;

  cin >> a >> b;

  int ca = a, cb = b;

  while (b) {
    int r = a % b;
    a = b;
    b = r;
  }

  cout << ca * cb / a << endl;

  return 0;
}