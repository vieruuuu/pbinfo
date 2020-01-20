#include <iostream>

#include <fstream>

using namespace std;

ifstream fin("halfsort1.in");
ofstream fout("halfsort1.out");

void citire(int & n, int v[]) {
  fin >> n;
  for (int i = 1; i <= n; i++) {
    fin >> v[i];
  }

}

void afisare(int n, int v[]) {
  for (int i = 1; i <= n; i++) {
    fout << v[i] << ' ';
  }
}

void sortare(int n, int m, int v[], int c) {
  for (int i = n; i < m; i++) {
    for (int j = i + 1; j <= m; j++) {
      if ((v[i] > v[j] && c == 1) || (v[i] < v[j] && c == 0)) {
        swap(v[i], v[j]);
      }
    }
  }

}

int main() {
  int n, v[1001];

  citire(n, v);

  sortare(1, n / 2, v, 1);
  sortare(n / 2 + 1, n, v, 0);

  afisare(n, v);

  fin.close();
  fout.close();

  return 0;
}

