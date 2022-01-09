#include <iostream>

using namespace std;

int main() {
  int S, c, n;

  cin >> S >> c >> n;

  int rez = 0;

  if (S % c == 0) {
    rez = rez + 1;
  }

  if (S % n == 0) {
    rez = rez + 3;
  }

  if (rez == 4) {
    cout << "CN" << endl;
  } else if (rez == 1) {
    cout << "C" << endl;
  } else if (rez == 3) {
    cout << "N" << endl;
  } else {
    cout << "nimic" << endl;
  }

  return 0;
}
