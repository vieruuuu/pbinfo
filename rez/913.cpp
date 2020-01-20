#include <iostream>

using namespace std;

void citire(int & n, int v[]) {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
}

void afisare(int n, int v[]) {
  for (int i = 1; i <= n; i++) {
    cout << v[i] << " ";
  }

}

int prim(int n) {

  if (n % 2 == 0 || n < 1) {
    return 0;
  } else {
    for (int i = 3; i * i <= n; i += 2) {
      if (n % i == 0) {
        return 0;
      }
    }
  }
  return 1;
}

void urmatorul_prim(int & nr) {
  if (prim(nr) == 0) {
    nr = nr + 1;
    urmatorul_prim(nr);
  }
}

void inloc(int v[], int i) {
  urmatorul_prim(v[i]);
}

int main() {
  int v[1100], n;

  citire(n, v);

  for (int i = 1; i <= n; i++) {
    if (prim(v[i]) == 0) {
      inloc(v, i);
    }
  }

  afisare(n, v);

  return 0;
}
