#include <fstream>
//#include <iostream>

using namespace std;

ifstream f("permutari.in");
ofstream g("permutari.out");

int n, k, ok, s[1001], v[1001];

int valid(int k2) {
  for (int i = 1; i < k2; i++) {
    if (s[i] == s[k2]) {
      return 0;
    }
  }
  return 1;
}

int main() {
  f >> n;

  for (int i = 1; i <= n; i++) {
    v[i] = i;
  }

  k = 1;
  s[1] = 0;

  while (k >= 1) {
    ok = 0;

    while (!ok && s[k] + 1 <= n) {
      s[k]++;
      ok = valid(k);
    }

    if (ok == 1) {
      if (k == n) {
        for (int i = 1; i <= n; i++) {
          g << v[s[i]] << " ";
        }

        g << "\n";
      } else {
        k++;
        s[k] = 0;
      }

    } else {
      k--;
    }
  }
}
