#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  int v[n];

  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }

  for (int i = 2; i <= n; i += 2) {
    cout << v[i] << ' ';
  }

  cout << endl;

  if (n % 2 == 0) {
    n--;
  }

  for (int i = n; i >= 1; i -= 2) {
    cout << v[i] << ' ';
  }

  return 0;
}
