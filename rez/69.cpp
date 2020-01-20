#include <iostream>

using namespace std;

int main() {
  int n, c, ogl = 0;
  cin >> n;
  while (n != 0) {
    c = n % 10;
    ogl = ogl * 10 + c;
    n = n / 10;
  }

  cout << ogl;

  return 0;
}
