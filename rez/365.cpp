#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  for (int c = 0; c < 10; c++) {
    int cn = n, cm = m, gasit1 = 0, gasit2 = 0;
    while (cn) {
      int uc = cn % 10;
      if (uc == c) {
        gasit1 = 1;
      }
      cn = cn / 10;
    }

    while (cm) {
      int uc = cm % 10;
      if (uc == c) {
        gasit2 = 1;
      }
      cm = cm / 10;
    }
    if (gasit1 && gasit2) {
      cout << "DA";
      return 0;
    }
  }
  cout << "NU";
  return 0;
}