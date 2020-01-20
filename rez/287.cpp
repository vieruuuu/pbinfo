#include <iostream>

using namespace std;

int main() {
  int nrDeSiruri;

  cin >> nrDeSiruri;

  for (int _ = 0; _ < nrDeSiruri; _++) {
    int n;

    cin >> n;

    int v[n];

    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    int esteOrdonat = 1;

    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        if (v[i] > v[j]) {
          esteOrdonat = 0;
          i = n;
          break;
        }
      }
    }

    cout << esteOrdonat << ' ';
  }
}