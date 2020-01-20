#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  int v[n];

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int suntEgaleElementele = 1;

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (v[i] != v[j]) {
        suntEgaleElementele = 0;
        i = n;
        break;
      }
    }
  }

  if (suntEgaleElementele) {
    cout << "DA";
  } else {
    cout << "NU";
  }
}