#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  int v[n];

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < n / 2; i++) {
    cout << v[i] << " " << v[n - i - 1] << " ";
  }

  if (n % 2 == 1) cout << v[n / 2];

  return 0;
}
