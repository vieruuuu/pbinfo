#include <iostream>

using namespace std;

int main() {
  int n, c = 1;

  cin >> n;

  int v[n];

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < n; i++) {
    int k = 0;

    while (v[i]) {
      k++;
      v[i] = v[i] / 10;
    }

    if (k % 2 != 0) {
      c = 0;
    }
  }

  if (c == 0) {
    cout << "NU";
  } else {
    cout << "DA";
  }

  return 0;
}