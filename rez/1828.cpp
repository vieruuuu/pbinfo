#include <iostream>

using namespace std;

void citire(int & n, int v[]) {
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }

}

void afisare(int n, int v[1001]) {

  for (int i = 0; i < n; ++i) {
    cout << v[i] << " ";
  }

  cout << "\n";

}

int redus(int num) {

  int d = 2, m = 1, p;

  while (num != 1) {

    p = 0;

    while (num % d == 0) {

      ++p;
      num = num / d;

    }

    if (p) {
      m = m * d;
    }

    ++d;

    if (num > 1 && d * d > num) {
      d = num;
    }

  }

  return m;

}

void sortare(int n, int v[]) {
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (v[j] > v[i]) {
        swap(v[i], v[j]);
      }
    }
  }
}

void inloc(int n, int v[]) {
  for (int i = 0; i < n; ++i) {
    v[i] = redus(v[i]);
  }
}

int main() {

  int n, a[1001];

  citire(n, a);

  inloc(n, a);
  sortare(n, a);

  afisare(n, a);

  return 0;
}
