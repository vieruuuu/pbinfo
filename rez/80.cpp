#include <iostream>

using namespace std;

int main() {
  long long a, b, k = 0, ca;

  cin >> b;

  while (b) {
    cin >> a;
    ca = a;

    if (a) {
      while (b) {
        int r = ca % b;
        ca = b;
        b = r;
      }

      if (ca == 1) k++;
    }
    b = a;
  }
  cout << k;
}
