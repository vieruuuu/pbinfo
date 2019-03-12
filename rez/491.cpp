#include <iostream>

using namespace std;

int main() {
  int S = 0, n, a = 0, b = 0;

  cin >> n;

  int v[n];

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < n; i++) {
    if (v[i] % 2 == 0) {
      a = i;
    }
  }

  for (int i = n - 1; i > 0; i--) {
    if (v[i] % 2 == 0) {
      b = i;
    }
  }

  for (int i = b; i <= a; i++) {
    S = S + v[i];
  }

  if (a != b) {
    cout << S;
  } else {
    cout << "NU EXISTA";
  }

  return 0;
}
