#include <iostream>

using namespace std;

int main() {
  int n, s = 0, C = 0;

  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    s = s + a[i];
  }

  int ma = s / n;

  for (int i = 0; i < n; i++) {
    if (a[i] > ma) {
      C++;
    }
  }

  cout << C;
  return 0;
}
