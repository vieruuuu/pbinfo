#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  int v[n];

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int ul = v[n - 1];
  int toateSuntMultipliDeUl = 1;
  for (int i = 0; i < n - 1; i++) {
    int x = v[i];
    if (x % ul) {
      toateSuntMultipliDeUl = 0;
      break;
    }
  }

  if (toateSuntMultipliDeUl) {
    cout << "DA";
  } else {
    cout << "NU";
  }
}