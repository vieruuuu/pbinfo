#include <iostream>
using namespace std;

int main() {
  int n, k = 0;

  cin >> n;

  float v[n], a, b;

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  a = v[0];
  b = v[n - 1];

  if (a > b) {
    v[0] = a;
    a = b;
    b = v[0];
  }

  for (int i = 0; i < n; i++) {
    if (v[i] < a || b < v[i]) {
      k++;
    }
  }

  cout << k;

  return 0;
}