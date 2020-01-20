#include <fstream>
#include <cstring>

using namespace std;

int a[102][102];

int f(int i, int j) {

  if (a[i][j] != 0) {

    int x = a[i][j] == 3;

    a[i][j] = 0;

    return f(i, j + 1) + f(i, j - 1) + f(i - 1, j) + f(i + 1, j) + x;
  }

  return 0;
}

int main() {
  int n, m;
  int pi = 0, pj = 0;
  
  ifstream fin("moscraciun.in");
  ofstream fout("moscraciun.out");

  fin >> n >> m;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {

      fin >> a[i][j];

      if (a[i][j] == 2) {

        pi = i;
        pj = j;
      }
    }

  }

  fout << f(pi, pj);
}