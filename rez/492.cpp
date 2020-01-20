#include <iostream>

using namespace std;

int main() {
  int n, k = 0;

  cin >> n;

  int v[n];

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < n; i++) {
    int a = v[i];
    int b = v[n - i - 1];

    while (a != b) {
      if (a > b || a == b) {
        a = a - b;
      }
      if (a < b) {
        b = b - a;
      }
    }
    if (a == 1) {
      k++;
    }
  }
  if (k % 2 == 0) {
    cout << k / 2;
  } else {
    cout << k / 2 + 1;
  }

  return 0;
}