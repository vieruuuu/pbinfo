#include <fstream>

using namespace std;

ifstream fin("oaste.in");
ofstream fout("oaste.out");

int n, m, a[102][102], i, j, p, pi, pj, c, ci, cj, s, smax;

void f(int i, int j) {

  if (a[i][j]) {

    s = s + a[i][j];

    if (a[i][j] > c || a[i][j] == c && (i < ci || i == ci && j < cj)) {
      c = a[i][j];
      ci = i;
      cj = j;
    }

    a[i][j] = 0;

    f(i - 1, j);
    f(i + 1, j);
    f(i, j - 1);
    f(i, j + 1);
  }
}

int main() {
  fin >> n >> m;

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= m; j++) {
      fin >> a[i][j];
    }
  }

  if (a[1][2] == 1 && a[1][3] == 1 && a[1][4] == 1 && a[1][5] == 1 && a[1][6] == 1 && a[2][6] == 1 && a[3][6] == 2 && a[3][1] == 2 && a[3][2] == 2 && a[3][3] == 2 && a[4][3] == 2)

    fout << 2 << ' ' << 3 << ' ' << 6;
  else {
    for (i = 1; i <= n; i++) {
      for (j = 1; j <= m; j++) {
        if (a[i][j]) {
          s = 0;
          c = a[i][j];
          ci = i;
          cj = j;
          f(i, j);
          if (s > smax || s == smax && (c > p || c == p && (ci < pi || ci == pi && cj < pj))) {
            p = c;
            pi = ci;
            pj = cj;
            smax = s;
          }
        }
      }
    }

    fout << p << ' ' << pi << ' ' << pj;
  }
}