#include <fstream>

using namespace std;

ifstream fin("palindrom_ciclic.in");
ofstream fout("palindrom_ciclic.out");

void citire(int & n, int v[]) {
  fin >> n;
  for (int i = 1; i <= n; i++) {
    fin >> v[i];
  }
}
int palindrom(int n, int v[]) {
  for (int i = 1; i <= n / 2; i++) {
    if (v[i] != v[n - i + 1]) {
      return 0;
    }
  }
  return 1;
}

void afisare(int nr) {
  if (nr != -1) {
    fout << "DA " << nr;
  } else {
    fout << "NU";
  }
}

int determin(int n, int v[]) {
  for (int i = 0; i < n; i++) {
    if (palindrom(n, v)) {
      return i;
    }
    int x = v[1];
    for (int j = 1; j < n; j++) {
      v[j] = v[j + 1];
    }
    v[n] = x;
  }
  return -1;
}

int main() {
  int n, v[10001];
  citire(n, v);

  int nr = determin(n, v);
  afisare(nr);

  return 0;
}
