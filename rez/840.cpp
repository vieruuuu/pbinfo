// #include <fstream>
#include <iostream>

using namespace std;

void nuleaza(char & variabila) {
  if (variabila == 'A') {
    variabila = 0;
  }
}

void schimba(char directia, char & variabila) {
  if (directia) {
    if (directia == 'C') {
      variabila = 'E';
    } else if (directia == 'E') {
      variabila = 'C';
    } else if (directia == 'A' && !variabila) {
      variabila = 'C';
    }
  }
}

int main() {
  int n, m;
  int primu = 1;

//   ifstream cin("croco.in");
//   ofstream cout("croco.out");

  cin >> n >> m;

  int a[101][101] = {
    0
  };
  char b[101][101] = {
    0
  };

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int x = a[i][j];
      char y = b[i][j];

      if (!x) {
        b[i][j] = 'A';
        continue;
      } else if (primu) {
          y = 'C';
          primu = 0;
      }

      char sus = 0, jos = 0, stanga = 0, dreapta = 0;

      if (i - 1 >= 0) {
        sus = b[i - 1][j];
      }
      if (i + 1 <= n) {
        jos = b[i + 1][j];
      }
      if (j - 1 >= 0) {
        stanga = b[i][j - 1];
      }
      if (j + 1 <= m) {
        dreapta = b[i][j + 1];
      }

      schimba(sus, y);
      schimba(dreapta, y);
      schimba(jos, y);
      schimba(stanga, y);

      b[i][j] = y;

    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << b[i][j] << ' ';
    }
    cout << endl;
  }

  return 0;
}