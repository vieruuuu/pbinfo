#include <iostream>

using namespace std;

void afisare(int & n, int a[]) {
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cout << a[i] << ' ';
  }
}

void citire(int & n, int a[]) {
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
}

int palindrom(int x) {
  int z = 0, y;

  y = x;

  while (x != 0) {
    z = z * 10 + x % 10;
    x = x / 10;
  }
  if (z == y) {
    return 1;
  } else {
    return 0;
  }
}

void eliminare(int k, int & n, int a[]) {
  for (int i = k; i < n; i++) {
    a[i] = a[i + 1];
  }
  n--;
}
int main() {
  int n, a[1001];

  citire(n, a);

  int i = 1;
  while (i <= n) {
    if (palindrom(a[i])) {
      eliminare(i, n, a);
    } else {
      i++;
    }
  }

  afisare(n, a);

  return 0;
}

