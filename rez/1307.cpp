#include <iostream>

using namespace std;

void citire(int & n, int v[]) {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
}
void afisare(int v[]) {
  int ok = 0;

  for (int i = 1; i <= 1000; i++) {
    if (v[i] == 1) {
      cout << i << ' ';
      ok = 1;
    }
  }
  
  if (ok == 0) {
    cout << "Sirul Y este vid.";
  }
}
void constr(int & n, int x[], int y[]) {
  for (int i = 1; i <= n; i++) {
    int d = 2;

    while (x[i] > 1) {
      if (x[i] % d == 0 && x[i] % (d * d) != 0) {
        y[d] = 1;
      }

      while (x[i] % d == 0) {
        x[i] = x[i] / d;
      }
      d++;
    }
  }
}

int main() {
  int x[1001], y[1001] = {
    0
  }, n;

  citire(n, x);
  constr(n, x, y);
  afisare(y);

  return 0;
}
