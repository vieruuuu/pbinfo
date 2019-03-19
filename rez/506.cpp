#include <iostream>

using namespace std;

int main() {
  int n, ok, nr = 0, d;

  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    ok = 1;

    if (a[i] == 0 || a[i] == 1) {
      ok = 0;
    }

    for (d = 2; d * d <= a[i]; d++) {
      if (a[i] % d == 0) {
        ok = 0;
      }
    }

    if (ok) {
      nr++;
    }
  }

  if (nr == 0) {
    cout << "NU";
  } else {
    cout << "DA";
  }
}