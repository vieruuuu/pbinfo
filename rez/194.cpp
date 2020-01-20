#include <fstream>
#include <iostream>
#include <string.h>

using namespace std;

ifstream f("anagrame1.in");
ofstream g("anagrame1.out");

int n, k, ok, s[9];
char v[9];

int valid(int k) {
  for (int i = 1; i < k; i++) {
    if (s[i] == s[k]) {
      return 0;
    }
  }

  return 1;
}

int main() {
  f >> v;
  n = strlen(v);

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (v[i] > v[j]) {
        swap(v[i], v[j]);
      }
    }
  }

  k = 1;
  s[1] = -1;

  while (k) {
    ok = 0;

    while (!ok && s[k] + 1 < n) {
      s[k]++;
      ok = valid(k);
    }

    if (ok == 1) {
      if (k == n) {
        for (int i = 1; i <= n; i++) {
          g << v[s[i]];
        }

        g << "\n";
      } else {
        k++;
        s[k] = -1;
      }

    } else {
      k--;
    }
  }
}