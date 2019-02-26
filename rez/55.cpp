#include <iostream>

using namespace std;

int main() {
  int x, min = 1000000, nrpoz = 0;

  cin >> x;

  while (x != 0) {

    if (x > 0) {
      nrpoz = 1;
      if (x < min) {
        min = x;
      }
    }
    cin >> x;
  }

  if (nrpoz) {
    cout << min;
  } else {
    cout << "NU EXISTA";
  }

  return 0;
}
